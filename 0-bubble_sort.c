#include "sort.h"

/**
 * bubble_sort - implements bubble-sort algorithm.
 * @array: input array.
 * @size: size of @array.
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t len = size, i;
	int tmp;
	bool flag = false;

	if (array == NULL || size <= 2)
		return;
	while (flag == false)
	{
		flag = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				flag = false;
			}
		}
		len = len - 1;
	}
}
