#include <stdio.h>
/**
 * Description: This program show us the larger prime factor of 1231952
 * main - Prints the larger prime number
 * Return: 0 (succefully)
 **/


int main(void)
{
	long int n;

	n = 612852475143;

	long int d = 2, maxFact;

	while (n != 0)
	{
		if ((n % d) != 0)
		{
			d = d + 1;
		}
		else
		{
			maxFact = n;
			n = n / d;
			if (n == 1)
			{
				printf("%ld", maxFact);

				break;
			}
		}
	}
	printf("\n");
	return (0);
}
