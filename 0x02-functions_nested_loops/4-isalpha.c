#include "holberton.h"

/**
 *_isalpha - Entry point
 * isAlpha - main
 * @c : return
 * Return: 1 o 0
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
