#include "sort.h"
#define SIZE 30
/**
 * Get_Gap - populates the gaps array with knuth sequence
 * @gaps: is the array of knuth sequence
 * @size: the size of the gaps array
 * Return: nothing
 */

void Get_Gap(size_t *gaps, size_t size)
{
	int gap = 1, i = 0;

	while ((size_t)gap < size)
	{
		gaps[i++] = gap;
		gap = 3 * gap + 1;
	}
}

/**
 * Gap_basedinsertion - insert elements at position based on gaps
 * @array: list of elements
 * @size: is the size of the list
 * @gaps: is the gap used for comparison
 * Return: nothing
 */
void Gap_basedinsertion(int *array, size_t size, int gaps)
{
	size_t i;
	int tmp, j;

	for (i = gaps; i < size; i++)
	{
		tmp = array[i];
		j = i;
		while (j >= gaps && array[j - gaps] > tmp)
		{
			array[j] = array[j - gaps];
			j -= gaps;
		}
		array[j] = tmp;
	}
}
/**
 * shell_sort -  sorts an array of integers in ascending order using the
 * Shell sort algorithm, using the Knuth sequence
 * @array: is the list of elements
 * @size: the size of the list
 * Return: nothing
 */

void shell_sort(int *array, size_t size)
{
	size_t i;
	size_t gaps[SIZE];

	Get_Gap(gaps, size);
	for (i = SIZE - 1; i > 0; i--)
	{
		Gap_basedinsertion(array, size, gaps[i]);
	}
}
