#include "sort.h"

/**
 * shell_sort - implements the shell sort algorithm.
 * @array: input array.
 * @size: size of the array.
 * Return: nothing.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int temp;

	for (gap = size / 2; gap > 0; gap /= 2)
	{
		i = gap;
		while (i < size)
		{
			temp = array[i];
			j = i;
			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j = j - gap;
			}
			i = i + 1;
			array[j] = temp;
		}
		print_array(array, size);
	}
}
