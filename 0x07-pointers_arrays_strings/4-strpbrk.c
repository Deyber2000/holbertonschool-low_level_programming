#include "holberton.h"
/**
 *_strpbrk - This functiosearches a string for any of a set of bytes.
 * @s: String to search the occurrence
 * @accept: Characters to compare
 * Return: A pointer to the first character occurrenced
 **/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
