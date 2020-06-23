#include "holberton.h"

/**
 * print_rev - Print string in reverse
 * @s: string
 **/

void print_rev(char *s)
{
	int len = 0, i;


	while (*s != '\0')
	{
		len++;
		s++;
	}



	for (i = len; *(s + i) >= 0 ; i--)
	{
		if (i >= 0 && i <= (len - 1))
		{
		_putchar(*(s + i));
		}
	}
	_putchar('\n');
}
