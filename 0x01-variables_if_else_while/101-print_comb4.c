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
	int c;
	for (c = 0; c < 10; c++)
	{
		putchar('0' + c);
		for (d = 12; d < 90; d++)
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
	}
	return (0);
}
