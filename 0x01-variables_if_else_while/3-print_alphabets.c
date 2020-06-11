#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char minuscula;

	char mayuscula;

	for (minuscula = 'a'; minuscula <= 'z'; minuscula++)
		putchar(minuscula);
	for (mayuscula = 'A'; mayuscula <= 'Z'; mayuscula++)
		putchar(mayuscula);
	putchar('\n');

	return (0);



}
