#include "holberton.h"

/**
 * *_strcat - This function cancatenates two strings
 * @dest: Destination
 * @src: Source
 * Return: A pointer to the resulting string dest
 **/

char *_strcat(char *dest, char *src)
{
	int lenD;

	int lenS;

	for (lenD = 0; dest[lenD] != '\0'; lenD++)
	{
		;
	}

	for (lenS = 0; src[lenS] != '\0'; lenS++, lenD++)
	{
		dest[lenD] = src[lenS];
	}

	dest[lenD] = '\0';

	return (dest);
}
