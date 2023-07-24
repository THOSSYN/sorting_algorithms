#include "sort.h"
#include <stdio.h>

/**
 * swap - exchange one value with another
 * @value1: is the value to exchange
 * @value2: is the value to exchange with
 * Return: Nothing
 */

void swap(int *value1, int *value2)
{
	int tmp;

	tmp = *value1;
	*value1 = *value2;
	*value2 = tmp;
}
/**
 * pivot_function - create a pivot index for quicksort
 * @array: is the array
 * @size: is the size of the array
 * @low: is the starting index
 * Return: the index of the pivot
 */
size_t pivot_function(int *array, size_t low, size_t size)
{
	int pivot = array[size];
	size_t i = low - 1, j;

	for (j = low; j < size; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[size]);

	return (i + 1);
}

/**
 * quick_sort - sorts an array in ascending order
 * @array: is the list of elements
 * @size: is the size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	int pvt_index;

	if (size <= 1)
		return;

	pvt_index = pivot_function(array, 0, size - 1);
	print_array(array, size);
	quick_sort(array, pvt_index);
	quick_sort(array + pvt_index + 1, size - pvt_index - 1);
}
