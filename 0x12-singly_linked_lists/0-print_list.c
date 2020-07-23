#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: singly linked list to print
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t j;
	if (!str)
	{
		printf("[0] (nil)");
	}

	for (j = 0; h; j++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (j);
}
