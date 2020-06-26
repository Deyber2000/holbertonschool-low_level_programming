#include "holberton.h"
/**
 * *string_toupper - This function translate from lowescase to uppercase
 * Return: A char with the change of the letter
 **/

char *string_toupper(char *)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
}
