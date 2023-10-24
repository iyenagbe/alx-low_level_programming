#include "lists.h"

/**
 * get_nodeint_at_index - return the nothing node of a linked list
 * @head: head of list
 * @index: index of node
 * Return: nothing node, If node does not exist, returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index && head != NULL; a++)
	{
		head = head->next;
	}

	return (head);
}
