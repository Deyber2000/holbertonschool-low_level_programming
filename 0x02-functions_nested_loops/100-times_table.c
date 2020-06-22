#include "holberton.h"
/**
 * print_times_table - Prints table
 * @n: Number of the table
 **/
void print_times_table(int n)
{
	int i, j;

	if (n < 16 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if ( (i * j) < 10)
				{
					if (j != 0)
					{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					}
					_putchar((i * j) + '0');
				}
				else if ((i * j) >= 10 && (i * j) < 100)
				{
					if (j != 0)
					{
					_putchar(' ');
					_putchar(' ');
					}
					_putchar(((i * j) / 10) + '0');
                                        _putchar(((i * j) % 10) + '0');
				}
				else if ((i * j) >= 100)
				{
					if (j != 0)
					{
					_putchar(' ');
					}
					_putchar(((i * j) / 100) + '0');
                                        _putchar((((i * j) / 10) % 10) + '0');
                                        _putchar(((i * j) % 10) + '0');
				}
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
