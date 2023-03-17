#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a list.
 * @h: the list_t list
 *
 * Return: the number of nodes in h.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
