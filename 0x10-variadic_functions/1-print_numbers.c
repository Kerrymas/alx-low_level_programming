#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: separator to print between numbers
 * @n: numbers to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsugned int i;
	va-list valist;

	va_start(valist, n);
	for (i = 0; i <n; i++)
			{
				num = va_arg(valist, int);
				printf("%d", num);if (i < n - 1 && separator)
					printf("%s", separator);
			}
	printf("\n");
	va_end(valist);
}
