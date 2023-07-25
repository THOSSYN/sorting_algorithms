#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using the insertion sort
 * @list: pointer to a pointer of the head node
 *
 * Return: returns nothing
 */
void insertion_sort_list(listint_t **list)
{
	int value;
	listint_t *fwd, *bwd, *hold;

	if (*list && (*list)->next)
	{
		fwd = (*list)->next;
		while (fwd != NULL)
		{
			value = fwd->n;
			bwd = fwd->prev;
			hold = fwd->next;

			while (bwd != NULL && value < bwd->n)
			{
				bwd->next = fwd->next;
				if (fwd->next)
					fwd->next->prev = bwd;
				fwd->prev = bwd->prev;
				fwd->next = bwd;
				if (bwd->prev)
					bwd->prev->next = fwd;
				bwd->prev = fwd;
				bwd = fwd->prev;
				if ((*list)->prev != NULL)
					*list = fwd;
				print_list(*list);
			}
			fwd = hold;
		}
	}
}
