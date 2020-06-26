#include "holberton.h"
/**
 * print_number - Print integers numbers
 * @n: Integer number
 * Return: void
 **/

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	else
		x = n;
	if (x / 10 != 0)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
