#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints array
 * @a: array
 * @n: Size of the array
 **/

void print_array(int *a, int n)
{
	int i = 1;

	while (i <= n)
	{
		printf("%d", *(a + i));
		if (i != n)
		{
		printf(", ");
		}
		i++;
	}
	printf("\n");
}
