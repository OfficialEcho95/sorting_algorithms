#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap- the function that swaps variables
 * @a: the first integer
 * @b: second integer
 */
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * selection_sort- the sort function
 * @array: array to be sorted
 * size: The size of the array
 */
void selection_sort(int *array, size_t size) 
{
    for (size_t i = 0; i < size - 1; i++) 
    {
        size_t min_idx = i;
        for (size_t j = i + 1; j < size; j++) 
        {
            if (array[j] < array[min_idx]) 
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            int temp = array[i];
            array[i] = array[min_idx];
            array[min_idx] = temp;
            print_array(array, size);
        }
    }
}
