#include "holberton.h"

/**
 * print_square - Prints a square made of sharps
 * @size: The size of the the square
 **/

void print_square(int size)
{
	int a;

	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 0; a < size; a++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
