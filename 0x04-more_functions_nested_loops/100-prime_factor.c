#include <stdio.h>
/**
 * main - Prints the larger prime number
 * Return: 0 (succefully)
 **/


int main(void)
{
	long int n;

	n = 1231952;

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
