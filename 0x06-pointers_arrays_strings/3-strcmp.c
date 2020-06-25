#include "holberton.h"
/**
 * _strcmp - Campares two strings
 * @s1: Firts string
 * @s2: Secomd string
 * Return: an integer
 **/
int _strcmp(char *s1, char *s2)
{
	int lens1;

	int c;

	int lens2;

	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
	{
		;
	}
	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
	{
		;
	}
	if (lens1 > lens2)
	{
		c = 15;
	}
	else if (lens1 == lens2)
	{
		c = 0;
	}
	else if (lens1 < lens2)
	{
		c = -15;
	}
	return (c);
}
