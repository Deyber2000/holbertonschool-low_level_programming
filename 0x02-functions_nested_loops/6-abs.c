#include "holberton.h"
#define CHAR_BIT 8
/**
 *_abs - Entry point
 * _abs - main
 *
 * Return: 1 o 0
 */
int _abs(int n)
{



	int const mask = n >> (sizeof(int) * CHAR_BIT - 1);
	return ((n + mask) ^ mask);
}
