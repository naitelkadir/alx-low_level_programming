#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum-them-all: function that returns sum o all parameters
 *@n: the number of all parameters
 *Return:sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, const unsigned int);
	}

	va_end(ap);

	return (sum);
}
