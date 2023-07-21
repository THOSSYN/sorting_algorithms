#ifndef SORT_H
#define SORT_H

#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
int _putchar(char c);
void swap(int *value1, int *value2);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
typedef enum kind_e
{
    SPADE = 0,
    HEART,
    CLUB,
    DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
    const char *value;
    const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
    const card_t *card;
    struct deck_node_s *prev;
    struct deck_node_s *next;
} deck_node_t;#include "sort.h"

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
void sort_deck(deck_node_t **deck);

#endif /* SORT_H */
