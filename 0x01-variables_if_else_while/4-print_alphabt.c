#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int letra;

	for (letra = 'a'; letra <= 'z'; letra++)
		if (letra != 'e' && letra != 'q')
			putchar(letra);
		putchar('\n');
	return (0);
}
