#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Prints integer arguments with a separator.
 * @separator: Thing to print between numbers.
 * @n: Number of arguments.
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
	{
		sep = (char *) separator;
	}
	va_start(list, n);

	if (n > 0)
	{
		printf("%d", va_arg(list, int));
	}
	for (i = 1; i < n; i++)
	{
		printf("%s%d", sep, va_arg(list, int));
	}
	printf("\n");
	va_end(list);
}
