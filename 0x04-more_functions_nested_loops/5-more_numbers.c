#include "holberton.h"

/**
 *more_numbers - Prints numbers from 0 to 14 10 times
 *
 **/

void more_numbers(void)
{
	int i;

	int h;

	for (i = 0; i < 10; i++)
	{
		for (h = 0; h <= 14; h++)
		{
			if (h > 9)
			{
				_putchar((h / 10) + '0');
			}
			_putchar((h % 10) + '0');
		}

		_putchar('\n');
	}
}
