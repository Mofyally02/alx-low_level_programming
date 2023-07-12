#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a valur in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the skip list to search in.
 * @value: Value to search for in the skip list.
 *
 * Return: Pointer to the first node where value is locaed.
 *	NULL if list is NULL or if value is not found in the list.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *temp;
	size_t skip, last;

	if (!list)
		return (NULL);

	temp = list->express;
	prev = list;
	skip = 0;

	while (temp && temp->n <= value)
	{
		prev = temp;

		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		temp = temp->express;

		if (!skip && temp)
			skip = temp->index - prev->index;
	}

	last = (temp) ? temp->index : (prev->index + skip - 1);
	printf("Value found between indexes [%ld] and [%ld]\n", prev->index, last);

	while (prev && prev != temp)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			break;
		 prev = prev->next;
	}

	if (prev && prev->n == value)
		return (prev);
	else
		return (NULL);

}