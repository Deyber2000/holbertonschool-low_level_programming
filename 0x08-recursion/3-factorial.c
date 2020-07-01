#include "holberton.h"
/**
 * factorial - Prints the factorial of a number
 * @n: Number
 * Return: The factorial of n
 **/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
