#include "holberton.h"
/**
 * _isdigit - Let us know if c is or not a digit
 * @c: A possible digit
 * Return: 0 o 1
 **/

int _isdigit(int c)
{

	int a;

	if (c >= 48 && c <= 57)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
