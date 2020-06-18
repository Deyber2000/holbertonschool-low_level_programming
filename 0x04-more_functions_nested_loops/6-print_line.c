#include "holberton.h"

/**
 *@n: Number of lines
 * print_line - Prints lines deppending of the number signed
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
