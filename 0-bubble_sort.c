#include "sort.h"

/**
 * bubble_sort - sorts @array in ascending order.
 * @array: input array.
 * @size: size of @array.
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len;
	int check = 0, temp;

	/* CHECK IF ARRAY IS NULLL OR SIZE IS LESS THAN 2 */
	if (array == NULL || size < 2)
		return;
	len = size;
	while (check == 0)
	{
		check = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				check = 0;
			}
		}
		len = len - 1;
	}
}
