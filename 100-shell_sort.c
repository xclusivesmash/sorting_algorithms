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

	if (array == NULL || size <= 2)
		return;
	gap = 1;
	while (gap < (size / 3))
		gap = gap * 3 + 1;
	while (gap >= 1)
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
		gap = gap / 3;
		print_array(array, size);
	}
}
