#include <stdio.h>
#include "lists.h"

/**
 * print_list - all the elements of a linked listto be print
 * @h: pointer to the list_t list to be print
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	s++;
	}

	return (s);
}
