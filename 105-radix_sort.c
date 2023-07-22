#include "sort.h"

/**
 * radix_sort -  sorts an array of integers in ascending order using
 * the Radix sort algorithm
 * @array: is the list of element
 * @size: is the size of the array
 * Return: nothing
 */

void radix_sort(int *array, size_t size)
{
	size_t i;
	int max = array[0], pos;

	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	for (pos = 1; max / pos > 0; pos *= 10)
	{
		Radixcount_sort(array, size, pos);
		print_array(array, size);
	}
}

/**
 * Radixcount_sort - place each element that correspond to index value at index
 * @array: is the list of elements
 * @size: is the size of the array
 * @pos: is the current position at the digit
 * Return: nothing
 */

void Radixcount_sort(int *array, size_t size, int pos)
{
	size_t i;
	int *count_digit, *resolved_array, j;

	count_digit = malloc(sizeof(int) * 10);
	if (!count_digit)
		return;
	for (j = 0; j < 10; j++)
		count_digit[j] = 0;
	for (i = 0; i < size; i++)
	{
		++count_digit[(array[i] / pos) % 10];
	}
	for (j = 1; j < 10; j++)
	{
		count_digit[j] += count_digit[j - 1];
	}
	resolved_array = malloc(sizeof(int) * size);
	if (resolved_array == NULL)
	{
		free(count_digit);
		return;
	}
	for (i = size - 1; i != (size_t)-1; i--)
		resolved_array[--count_digit[(array[i] / pos) % 10]] = array[i];
	for (i = 0; i < size; i++)
		array[i] = resolved_array[i];

	free(count_digit);
	free(resolved_array);
}
