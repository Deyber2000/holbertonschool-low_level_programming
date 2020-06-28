#include "holberton.h"
/**
 * *_strchr - A function that locates a character in a string
 * @s: String check
 * @c: The character that is gonna be searched
 * Return: A pointer to the first ocurrence in the string
 **/

char *_strchr(char *s, char c)
{


	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
}
