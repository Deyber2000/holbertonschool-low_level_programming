#include "holberton.h"
/**
 * *_strstr- a function that locates a substring.
 * @haystack: String
 * @needle: Substring
 * Return: Returns a pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
**/
char *_strstr(char *haystack, char *needle)
{
	unsigned int length = 0;

	while (needle[length] != '\0')
		length++;
	while (*haystack != '\0')
	{
		if ((_strncmp(haystack, needle, length) == 0))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
/**
 * _strncmp - compares two strings within n bytes.
 * @s1: string to check
 * @s2: string to check from
 * @n: number of bytes to check
 * Return: 0 if strings are the same
 * any other number if they are different.
**/
int _strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; i++)
	{
		s1++;
		s2++;
	}
	return (i - n);
}
