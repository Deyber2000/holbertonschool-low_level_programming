#include "holberton.h"

/**
 * print_rev - Print string in reverse
 * @s: string
 **/

void print_rev(char *s)
{
	int len = 0;


	while (*s != '\0')
	{
		len++;
		s++;
	}



	while (len > 0)
	{
		_putchar(*(s - 1));
		len--;
		s--;
	}
	_putchar('\n');
}
