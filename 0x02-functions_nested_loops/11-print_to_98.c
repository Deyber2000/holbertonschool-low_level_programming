#include "holberton.h"
#include <stdio.h>
/**
 * add - A function that adds two integers
 *@n: integer input
 *
 * Return: natural numbers since n
 */

void print_to_98(int n)
{

	if (n <=98)
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
	}

}
