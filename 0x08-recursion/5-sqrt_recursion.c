#include <stdio.h>
/**
 * checker - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @base: base number to check
 * Return: natural square root of number base
 */
int checker(int m, int base)
{
	if (base < 0)
		return (-1);
	if ((m + 1) * (m + 1) == base)
	{
		return (m + 1);
	}
	if ((m - 1) * (m - 1) == base)
	{
		return (m - 1);
	}
	if (m * m == base)
		return (m);
	if (m < 1)
		return (-1);
	return (checker((m / 2), base));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (checker((n / 2), n));
}
