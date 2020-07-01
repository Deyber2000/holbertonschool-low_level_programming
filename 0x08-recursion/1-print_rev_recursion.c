#include "holberton.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string.
 * Return: Void.
 **/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
