#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) of a doubly-linked list
 * @head: pointer to head of list
 * Return: sum of data or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int colector = 0;

	while (head)
	{
		colector += head->n;
		head = head->next;
	}
	return (colector);
}
