#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *@a : a number input
 *Return : return absolute value of a
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
