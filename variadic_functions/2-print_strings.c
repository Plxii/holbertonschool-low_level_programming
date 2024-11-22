#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Prints string arguments with a separator.
 * @separator: Thing to print between strings.
 * @n: - Number of arguments.
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int i;
	va_list ptr;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ptr, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

	}
	va_end(ptr);
	printf("\n");
}
