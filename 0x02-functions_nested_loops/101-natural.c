#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	int suma = 0;

	for (i = 0; i <= 1023; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			suma = suma + i;
		}
	}
	printf("%d", suma);
	printf("\n");
}
