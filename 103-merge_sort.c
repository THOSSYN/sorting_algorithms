#include <stdio.h>
#include "sort.h"

/**
 * merge_sort -  sorts an array of integers in ascending order using
 * the Merge sort algorithm
 * @array: is the list of elements
 * @size: is the size of the array
 * Return: nothing
 */

void merge_sort(int *array, size_t size)
{
	int left_half[20];
	int right_half[20];
	size_t mid = size / 2;
	size_t lsize = mid;
	size_t rsize = size - mid;
	size_t i;

	if (size < 2)
		return;

	for (i = 0; i < lsize; i++)
		left_half[i] = array[i];

	for (i = mid; i < size; i++)
		right_half[i - mid] = array[i];

	merge_sort(left_half, mid);
	merge_sort(right_half, size -  mid);
	merger(array, left_half, right_half, lsize, rsize);
}
/**
 * merger - merges element(s) currently found at the recursive tree
 * node to the original list
 * @array: is the list of elements
 * @l_arr: is the left_half array
 * @r_arr: is the right_half array
 * @lsize: is the size of the left_half array
 * @rsize: is the right_half of the right array
 * Return: nothing
 */
void merger(int *array, int *l_arr, int *r_arr, size_t lsize, size_t rsize)
{
	size_t i, j, k;

	printf("Merging...\n");

	printf("[left]: ");
	print_array(l_arr, lsize);

	printf("[right]: ");
	print_array(r_arr, rsize);

	i = j = k = 0;
	while (i < lsize && j < rsize)
	{
		if (l_arr[i] < r_arr[j])
		{
			array[k] = l_arr[i];
			i++;
		} else
		{
			array[k] = r_arr[j];
			j++;
		}
		k++;
	}
	while (i < lsize)
	{
		array[k] = l_arr[i];
		i++, k++;
	}
	while (j < rsize)
	{
		array[k] = r_arr[j];
		j++, k++;
	}
	printf("[Done]: ");
	print_array(array, lsize + rsize);
}
