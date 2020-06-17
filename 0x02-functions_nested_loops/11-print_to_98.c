#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - A function that prints natural numbers
 *@n: integer input
 * Return: natural numbers since n
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
			printf(", ");
			}
		n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
		printf("\n");
	}

}
