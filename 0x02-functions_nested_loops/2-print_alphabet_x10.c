#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int c;	
	char ch; 
	c = 0;

	while (c < 10 )
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		c = c + 1;
	}
}
