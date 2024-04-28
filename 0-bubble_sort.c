#include "sort.h"


/**
* bubble_sort - sorts an array in ascending order.
* @array: To be sorted.
* @size: size of @array.
* Return: void.
*/
void bubble_sort(int *array, size_t size)
{
    size_t i, len;
    int check = 0, temp;


    /* DO NOT SORT UNDER THIS COND. */
    if (array == NULL || size <= 2)
        return;
    len = size;
    while (check == 0)
    {
        check = 1;
        for (i = 0; i < (len - 1); i++)
        {
            if (array[i + 1] < array[i])
            { /* THAT'S WHEN WE DO THE SWAPPING */
                temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
                /* print array */
                print_array(array, size);
                check = 0;
            }
        }
        len = len - 1;
    }
}
