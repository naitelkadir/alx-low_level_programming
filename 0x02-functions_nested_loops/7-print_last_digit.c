#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: number's last digit result
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	int ld = num % 10;

	if (num < 0)
	{
		return (ld * (-1));
	}
	else
	{
		return (ld);
	}
}
