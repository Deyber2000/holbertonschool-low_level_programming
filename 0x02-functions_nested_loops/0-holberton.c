#include "holberton.h"

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int _putchar(char c);

int main(void)
{
	char a[] = "Holberton\n";

	int i = 0;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	return(0);
}
