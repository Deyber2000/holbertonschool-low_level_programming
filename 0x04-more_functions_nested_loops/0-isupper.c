#include "holberton.h"
/**
 *_isupper - a function that analize if a character is uppercase
 * @c: The letter
 * Return: 0 o 1
 **/

int _isupper(int c)
{
	int a;

	if (c >= 'A' && c <= 'Z')
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
