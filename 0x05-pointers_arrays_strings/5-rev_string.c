#include "holberton.h"

/**
 * rev_string - Revers a string
 * @s: string
 **/

void rev_string(char *s)
{
	int a = 0;

	int b = 0;

	char H;

	while (s[a] != '\0')
	{
		a++;
	}
	a = a - 1;

	while (a > b)
	{
		H = s[b];
		s[b] = s[a];
		s[a] = H;
		a--;
		b++;
	}
}
