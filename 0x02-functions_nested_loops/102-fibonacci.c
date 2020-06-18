#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int i, x = 0, y = 1, z = 1;

	for (i = 1; i <= 50; i++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%ld", z);
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
