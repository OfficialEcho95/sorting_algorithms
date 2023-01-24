#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
 * swap- this function swaps variables
 * @a: the first integers
 * @b: the second integers
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 * partition- This holds the lumoto logic
 * @array: array to be redistributed
 * @low: the low point
 * @high: the high point
 * Return: returns the redistributed list
 */
int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;

	for (int j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
 * quick_sort - uses the lumoto partition scheme
 * @array: array to be sorted using the function
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = size - 1;

	if (low < high)
	{
		int pivot = partition(array, low, high);

		quick_sort(array, pivot);
		quick_sort(array + pivot + 1, high - pivot);
	}
}
