#include "sort.h"

/**
 * selection_sort - implements the selection sort algorithm.
 * @array: input array.
 * @size: size of array.
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int minimum, temp;

	i = 0;
	while (i < size)
	{
		j = i;
		minimum = array[j];
		while (j < (size - 1))
		{
			if (array[j + 1] < minimum)
				minimum = array[j + 1];
			j = j + 1;
		}
		for (j = 0; j < size; j++)
		{
			if (array[j] == minimum)
				break;
		}
		temp = array[i];
		array[i] = minimum;
		array[j] = temp;
		print_array((const int *) array, size);
		i = i + 1;
	}
}
