#include "holberton.h"
/**
 * swap_int - This function swap the values of the variables through pointers
 * @a: First pointer
 * @b: Second pointer
 **/

void swap_int(int *a, int *b)
{
	*a = *a + *b;

	*b = *a - *b;

	*a = *a - *b;
}
