#include "sort.h"

/**
 * swap - exchange two value by pointer referencing
 * @value1: is the value to swap
 * @value2: is the value to swap with
 * Return: nothing
 */

void swap(int *value1, int *value2)
{
	int tmp = *value1;
	*value1 = *value2;
	*value2 = tmp;
}

/**
 * selection_sort -  sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: is the list of elements
 * @size: is the size of the array
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	if (array != NULL || size > 1)
	{
		size_t i, j, min_index;

		for (i = 0; i < size - 1; i++)
		{
			min_index = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[min_index])
				{
					min_index = j;
				}
			}
			if (min_index != i)
			{
				swap(&array[i], &array[min_index]);
				print_array(array, size);
			}
		}
	}
}
