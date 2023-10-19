#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a new added node at the beginning of thelinked list
 * @head: the double pointer to the list_t list
 * @str: the new string to added in the node
 * Return: address of new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
