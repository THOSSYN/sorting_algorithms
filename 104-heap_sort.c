#include "sort.h"

/**
 * heap_sort - sorts an array of integers in ascending order using
 * the Heap sort algorithm
 * @array: is the list of elements
 * @size: is the size of the array
 * Return: nothing
 */

void heap_sort(int *array, size_t size)
{
	size_t i;
	int non_leaf;

	non_leaf = (size / 2) - 1;
	for (i = non_leaf; i != (size_t)-1; i--)
	{
		Heapup(array, size, i);
		print_array(array, size);
	}

	for (i = size - 1; i > 0; i--)
	{
		swap(&array[0], &array[i]);
		print_array(array, size);
		Heapup(array, i, 0);
		print_array(array, size);
	}
}

/**
 * Heapup - heapify the node that's built from the get_build_nonleaf
 * @array: is the list of element
 * @size: is the size of the list of element
 * @non_leaf: is the node index gotten as a result of dividing binary
 * search heap tree into half
 * Return: nothing
 */

void Heapup(int *array, size_t size, size_t non_leaf)
{
	size_t Lg_ind = non_leaf, right_ind, left_ind;

	right_ind = (2 * non_leaf) + 2;
	left_ind = (2 * non_leaf) + 1;

	if (right_ind < size && array[right_ind] > array[Lg_ind])
		Lg_ind = right_ind;
	if (left_ind < size && array[left_ind] > array[Lg_ind])
		Lg_ind = left_ind;
	if (Lg_ind != non_leaf)
	{
		swap(&array[non_leaf], &array[Lg_ind]);
		Heapup(array, size, Lg_ind);
	}
}
/**
 * swap - exchange two values
 * @value1: is the value to exchange
 * @value2: is the value to excange with
 * Return: nothing
 */

void swap(int *value1, int *value2)
{
	int tmp = *value1;
	*value1 = *value2;
	*value2 = tmp;
}
