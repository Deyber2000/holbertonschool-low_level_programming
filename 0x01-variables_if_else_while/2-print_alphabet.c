#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	char letra = 'a';

	while (letra <= 'z')
	{
		printf("%c", letra);
		letra++;
	}
	return (0);
}
