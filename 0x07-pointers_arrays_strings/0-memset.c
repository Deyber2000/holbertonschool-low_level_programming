#include "holberton.h"
/**
 * *_memset - This function put a character in the firts n allocations of
 * A block of memory.
 * @s: The pointer to the block of memory
 * @b: Character to be copied
 * @n: The numbers of characters to be copied
 * Return: The pointer to the block of memory
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	char *mem = s;

	unsigned char value = b;

	for (i = 0; i < n; i++)
	{
		mem[i] = value;
	}
	return (mem);
}
