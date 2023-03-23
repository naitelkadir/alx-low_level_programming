#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, n = 0;
	char *sep = ", ";
	char *str;
	
	va_start(ap, format);
	
	while (format && format[n])
	{
		n++;
	}
	while (format && format[i])
	{
		if (i == n - 1)
		{
			sep = "";
		}
		switch(format[i])
		{
		case 'c':
			printf("%c%s", va_arg(ap, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(ap, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double), sep);
			break;
		case 's':
			str = va_arg(ap, char*);
			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s%s", str, sep);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
