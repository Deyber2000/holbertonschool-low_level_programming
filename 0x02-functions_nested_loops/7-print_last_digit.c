#include "holberton.h"

/**
 *print_last_digit - Entry point
 * print_last_digit - main
 * @c : return
 * Return: 1 o 0
 */

int print_last_digit(int c)
{
	int ld;

	if (c < 0)
		c = (-c);

	ld = (c % 10);

	_putchar(ld + '0');
	return (0);
}
