#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a = 48;


		while (a < 58)
		{
			if (a >= 49)
			{
				putchar(' ');
			}
			putchar(a);
			if (a != 57)
			{
				putchar(',');
			}
			a++;
		}
	putchar('\n');
	return (0);
}
