#include "sort.h"

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
 * bubble_sort - sorts an array in ascending order
 * @array: is the array containing the data
 * @size: size of the array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	i = size - 1;
	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
			j++;
		}
		i--;
	}
}
