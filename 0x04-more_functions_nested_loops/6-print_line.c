#include "holberton.h"

/**
 * print_line - a function that prints straight lines
 * @n: Number of lines printed
 **/

void print_line(int n)
{
	int i;

	char c = '_';

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = n; i > 0; i--)
	{
		_putchar(c);
	}
	if (n > 0)
	{
	_putchar('\n');
	}
}
