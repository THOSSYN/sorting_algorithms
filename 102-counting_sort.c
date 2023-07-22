#include "sort.h"

/**
 * counting_sort - sorts an array of integers in ascending order
 * using the counting sort algorithm
 * @array: is the list of elements
 * @size: is the size of the array
 * Return: Nothing
 */

void counting_sort(int *array, size_t size)
{
	/*first find max element*/
	size_t i;
	int max = array[0], *element_count, *resolved_array, j;

	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	element_count = malloc(sizeof(int) * (max + 1));
	if (element_count == NULL)
		return;
	/*fill the malloc'd space for elemnt_count array with 0's */
	for (j = 1; j <= max; j++)
		element_count[j] = 0;
	/*Now start filling the element_count array with the frequency*/
	/*using the array[i] of each element to index element_count array*/
	for (i = 0; i < size; i++)
		++element_count[array[i]];
	for (j = 0; j <= max; j++)
	{
		element_count[j] += element_count[j - 1];
	}
	print_array(element_count, max + 1);
	resolved_array = malloc(sizeof(int) * (max + 1));
	if (!resolved_array)
	{
		free(element_count);
		return;
	}
	for (i = size - 1; i != (size_t)-1; i--)
	{
		resolved_array[--element_count[array[i]]] = array[i];
	}
	for (i = 0; i < size; i++)
		array[i] = resolved_array[i];
	free(element_count);
	free(resolved_array);
}
