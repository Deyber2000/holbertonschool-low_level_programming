#include "holberton.h"
/**
 * *rot13 - encode in rot13
 * @s: string
 * Return: string encoded
 **/
char *rot13(char *s)
{
	int i;

	int j;

	char abc[] =   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; abc[j] != '\0'; j++)
		{
			if (s[i] == abc[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
