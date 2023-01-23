#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void value_swap(int *a, int *b)
{
    int tmp = *a;

    *a = *b;
    *b = tmp;
}

void bubble_sort(int *array, size_t size)
{
    int i, j;
    for (i = 0; i < (size - 1); i++)
        for(j = 0; j < (size - i - 1); j++)
            if (array[j] > array[j + 1])
                value_swap(&array[j], &array[j+1]);
        print_array(array, size);
}
