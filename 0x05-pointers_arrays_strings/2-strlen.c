#include "holberton.h"

/**
 * _strlen - prints the lengh of a string
 * @s: Pointer
 * Return: The leng of the string
 **/

int _strlen(char *s)
{
	int len = 0;


	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
