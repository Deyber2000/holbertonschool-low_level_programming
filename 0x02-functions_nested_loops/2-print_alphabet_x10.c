#include "holberton.h"

/**
 *print_alphabet_x10 - Entry point
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int letra;

	int i;

	for (i = 0; i <= 9; i++)
	{
		for (letra = 'a'; letra <= 'z'; letra++)
		{
			_putchar(letra);
		}
		_putchar('\n');
	}
}
