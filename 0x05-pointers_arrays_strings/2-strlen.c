#include "holberton.h"

/**
 * _strlen - prints the lengh of a string
 * @s: Pointer
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
