#include "holberton.h"
/**
 * *_strncpy - Copies a string
 * @dest: Destination
 * @src: Source
 * @n: number of bytes that will be copied from source.
 * Return: dest
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
