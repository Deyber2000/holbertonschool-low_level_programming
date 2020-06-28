#include "holberton.h"
/**
 *_strpbrk - This functiosearches a string for any of a set of bytes.
 * @s: String to search the occurrence
 * @accept: Characters to compare
 * Return: A pointer to the first character occurrenced
 **/
char *_strpbrk(char *s, char *accept)
{
	int i;

	int j;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);

			}
		}
	}
	return (s + 1);
}
