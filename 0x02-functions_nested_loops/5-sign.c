#include "holberton.h"
/**
 *print_sign - Entry point
 * print_sign - main
 * @n : return
 * Return: 1 ,-1 o 0
 */

int print_sign(int n)
{

	int a;

	if (n > 0)
	{
		a = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		a = 0;
		_putchar('0');
	}
	else
	{
		a = -1;
		_putchar('-');
	}
	return (a);
}
