#include "holberton.h"
/**
 * *leet - Translate
 * @s: String
 * Return: String modified
 **/

char *leet(char *s)
{
	int len1, len2;

	char *a = "aAeEoOtTlL";

	char *b = "4433007711";

	for (len1 = 0; s[len1] != '\0'; len1++)
	{
		for (len2 = 0; len2 <= 9; len2++)
		{
			if (s[len1] == a[len2])
			{
				s[len1] = b[len2];
			}
		}
	}
	return (s);
}
