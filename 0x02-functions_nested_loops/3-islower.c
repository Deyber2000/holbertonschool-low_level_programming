#include "holberton.h"

/**
 *_islower - Entry point
 *Return: Always 0 (Success)
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
