#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints a linked lists
 * @h: pointer to frist node
 *
 * Return: size of list
 */

size_t print_listint(const listint_t *h)
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
