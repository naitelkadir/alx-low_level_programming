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
	int a, b, c, d;
        
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = a; c < 10; c++)
			{
				for (d = b + 1; d < 10; d++)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					putchar('0' + d);
					if (a == 9 && b == 8 && c ==9 && d == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return(0);
}
