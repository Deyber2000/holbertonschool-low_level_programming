#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: Integer to print
 **/

void print_number(int n)
{
	unsigned  int a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
		_putchar((a % 10) + '0');
}
