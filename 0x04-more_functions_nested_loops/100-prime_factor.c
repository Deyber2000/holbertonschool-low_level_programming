#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */


int main(void)
{
	long int n;

	int d;

	long int maxFact;

	n = 612852475143;

	d = 2;

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
