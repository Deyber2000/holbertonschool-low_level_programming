#include "holberton.h"

/**
 * print_diagonal - Print a diagonal line
 * @n: Number of times that the char / shoul appear
 **/

void print_diagonal(int n)
{


	int a;

	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < n; a++)
	{
		for (i = 0; i < (a + 1); i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
