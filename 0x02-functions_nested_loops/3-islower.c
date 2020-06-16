#include "holberton.h"
#include <ctype.h>
#include <stdio.h>
/**
 *_islower - Entry point
 *Return: Always 0 (Success)
 */
int _islower(int c)
{
	int a = 1;

	int b = 0;

	if(c >= 'A' && c <= 'Z')
	{
		printf("%d", b );
	}
	else if(c >= 'a' && c <= 'z')
	{
		printf("%d", a);
	}
	return (0);
}
