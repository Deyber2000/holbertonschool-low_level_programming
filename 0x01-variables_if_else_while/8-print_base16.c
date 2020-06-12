#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char letra;

	for (a = 48; a < 58; a++)
		putchar(a);


	for (letra = 'a'; letra <= 'f'; letra++)
		putchar(letra);
	putchar('\n');
	return (0);
}
