#include "holberton.h"

/**
 *_islower - Entry point
 * isLower - main
 * @c : return
 * Return: 1 o 0
 */
int _islower(int c)
{

int a;


	if (c >= 'A' && c <= 'Z')
	{
		a = 0;
	}
	else if (c >= 'a' && c <= 'z')
	{
		a = 1;
	}
	return (a);
}
