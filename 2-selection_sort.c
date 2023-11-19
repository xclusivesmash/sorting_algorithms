#include "sort.h"

/**
 * selection_sort - Implements the selection sort algorithm.
 * @array: input array.
 * @size: size of @array.
 * Return: void.
 */
void selection_sort(int *array, size_t size)
{
	int *store, temp, *temp1;
	size_t i, j;

	/* CHECKS IF ARRAY IS NULL OR SIZE IS < 2 */
	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		store = array + i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *store)
				store = array + j;
		}
		temp1 = array + i;
		if (temp1 != store)
		{ /* SWAPPING PHASE */
			temp = *temp1;
			*temp1 = *store;
			*store = temp;
			print_array(array, size);
		}
	}
}
