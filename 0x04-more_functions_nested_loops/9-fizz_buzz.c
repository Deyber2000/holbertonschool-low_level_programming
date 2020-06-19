#include <stdio.h>

/**
 * main -Prints numbers from 0 to 100 with some exceptions
 * Return: 0 (Succesfully)
 **/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		if ((i % 5) == 0 && (i % 3) != 0)
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
			{
			printf("Buzz ");
			}
		}
		if ((i % 3) != 0 && (i % 5) != 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
