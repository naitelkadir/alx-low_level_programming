#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum-them-all: function that returns sum o all parameters
 *@n: the number of all parameters
 *return the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;
	va_list ap;
	
	if (n == 0)
	{
		return (0);
	}
	
	va_start(ap,n);
	
	for (i = 0; i < n; i++)
	{
		s = s + va_arg(ap, const unsigned int);
	}
	
	va_end(ap);
	
	return (s);
}
