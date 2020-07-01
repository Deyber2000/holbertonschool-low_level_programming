#include "holberton.h"
/**
 * _strlen_recursion - Prints the length of a string
 * @s: String
 * Return: Length of the string
 **/

int _strlen_recursion(char *s)
{


	if (!*s)
	{
		return (0);
	}
	s++;

	return (1 + _strlen_recursion(s));
}
