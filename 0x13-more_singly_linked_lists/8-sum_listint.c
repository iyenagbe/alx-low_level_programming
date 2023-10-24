#include "lists.h"

/**
 * sum_listint - the sum of the data (n) of
 * linked list
 * @head: head of list
 * Return: sum of data (n)
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
