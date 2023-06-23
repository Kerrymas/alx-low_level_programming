#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints stringd followed by a new line
 * @seperator:  separator to print between the string
 * @n: the number of strings to be printed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str)
			print("%", str);
		else
			printf("(nill)");
		if (i < n - 1 &&eparator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
