#include "sort.h"

/**
 * recursive_sort - sorts array recursively.
 * @array: input array.
 * @size: size of @array.
 * @L: left
 * @R: right
 * Return: void.
 */
void recursive_sort(int *array, size_t size, int L, int R)
{
	int index, below, *pivot, temp1;

	if (R - L > 0)
	{
		pivot = array + R;
		for (index = below = L; below < R; below++)
		{
			if (array[below] < *pivot)
			{
				if (index < below)
				{
					temp1 = *(array + below);
					*(array + below) = *(array + index);
					*(array + index) = temp1;
					print_array(array, size);
				}
				index = index + 1;
			}
		}
		if (array[index] > *pivot)
		{
			temp1 = *(array + index);
			*(array + index) = *pivot;
			*pivot = temp1;
			print_array(array, size);
		}
		recursive_sort(array, size, L, index - 1);
		recursive_sort(array, size, index + 1, R);
	}
}
/**
 * quick_sort - implements the quick sort algorithm.
 * @array: input array.
 * @size: size of @array.
 * Return: void.
 */
void quick_sort(int *array, size_t size)
{
	/* CHECK IF ARRAY IS NULL OR SIZE IS < 2 */
	if (array == NULL || size < 2)
		return;

	/* SORT ARRAY RECURSIVELY */
	recursive_sort(array, size, 0, size - 1);
}
