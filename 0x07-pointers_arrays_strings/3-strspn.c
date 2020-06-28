#include "holberton.h"
/**
 * _strspn - Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 * @s: Initial segment
 * @accept: String with the characters to compare
 * Return: Number of first bytes in s that are in accept
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
