#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints array
 * @a: array
 * @n: Size of the array
 **/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i != n)
		{
		printf(", ");
		}
	}
	printf("\n");
}
