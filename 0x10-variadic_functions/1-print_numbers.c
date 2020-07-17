#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - Prints number passed as arguments
 * @separator: String that separates the numbers
 * @n: Amount of arguments after the named arguments
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list access;

	if (separator != NULL)
	{
		va_start(access, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(access, int));
			if (i != n - 1)
			{
				printf("%s", separator);

			}
		}


	}
	printf("\n");
}
