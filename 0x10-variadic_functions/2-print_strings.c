#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: elements to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{	
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		printf("%s", str);

		if ( separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}

