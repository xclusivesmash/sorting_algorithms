#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order.
 * @list: input duobly linked list.
 * Return: void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *node;

	/* INPUT VALIDATION */
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	node = (*list)->next;
	while (node != NULL)
	{
		temp = node->prev;
		while (temp != NULL && node->n < temp->n)
		{
			temp->next = node->next;
			if (node->next != NULL)
				node->next->prev = temp;
			node->prev = temp->prev;
			node->next = temp;
			if (temp->prev != NULL)
				temp->prev->next = node;
			else
				*list = node;
			temp->prev = node;
			temp = node->prev;
			print_list((const listint_t *) *list);
		}
		node = node->next;
	}
}
