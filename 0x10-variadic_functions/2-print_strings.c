#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print a list of strings
 * @separator: characters used to delimit
 * @n: nmber of items to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list access;

	if (separator != NULL)
	{
		va_start(access, n);

		for (i = 0; i < n ; i++)
		{
			printf("%s", va_arg(access, char *));
			if (i != n - 1)
			{
				printf("%s", separator);

			}
		}
	}
	printf("\n");
}
