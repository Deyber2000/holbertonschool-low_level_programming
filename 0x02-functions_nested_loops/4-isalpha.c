#include "holberton.h"

/**
 *_isalpha - Entry point
 *Return: 0 o 1
 */

int _isalpha(int c)
{
	int a;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		a = 1;
	else
	{
		a = 0;
	}
	return (a);
}
