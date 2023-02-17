#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	int a;
	int b;
	for (d = 0; d < 90; d++)
	{
		a = d / 10;
		b = d % 10;
		if (d != 89)
		{
			if (a < b)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar(',');
				putchar(' ');
			}
		}
		else
		{
			putchar('0' + a);
			printf("%d\n", b);
		}
	}
	return (0);
}
