#include "holberton.h"
/**
 * _strlen_recursion - Prints the length of a string
 * @s: String
 * Return: Length of the string
 **/
int i = 0;
int _strlen_recursion(char *s)
{


	if (*s)
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
