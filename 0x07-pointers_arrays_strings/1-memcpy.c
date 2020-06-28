#include "holberton.h"
/**
 * *_memcpy - Copy n bytes from a block of memory pointed by src to dest
 * @src: Source
 * @dest: Memory destination
 * @n: Number of bytes
 * Return: pointer to dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
