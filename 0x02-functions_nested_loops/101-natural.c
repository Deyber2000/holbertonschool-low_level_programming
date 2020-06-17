#include <stdio.h>

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
	printf("\n");
}
