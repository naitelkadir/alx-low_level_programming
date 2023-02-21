#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *@a : a number input
 *Return : return a if a is positive or null return a*(-1) if a is negative 
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (a * (-1));
	}
	else
	{
		return (a);
	}
}
