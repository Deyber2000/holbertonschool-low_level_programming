#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	int d;

	for (i = 0; i < 9; i++)
	{
		for (d = i + 1; d < 10; d++)
		{
			putchar(i % 10 + '0');
			putchar(d % 10 + '0');
			if (i != 8 || d != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
