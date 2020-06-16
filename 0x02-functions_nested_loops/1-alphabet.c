#include "holberton.h"
/**
 *print_alphabet - Entry point
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		_putchar(letra);
	}
	_putchar('\n');
}
