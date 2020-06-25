#include "holberton.h"
/**
 * reverse_array - Reverses an array that contain integer
 * @a: The array with integers
 * @n: number of elements in teh array
 **/

void reverse_array(int *a, int n)
{

	int c, d;

	int rev[100];

	for (c = n - 1, d = 0; c >= 0; c--, d++)
	{
		rev[d] = a[c];
	}
	for (c = 0; c < n; c++)
	{
		a[c] = rev[c];
	}
}
