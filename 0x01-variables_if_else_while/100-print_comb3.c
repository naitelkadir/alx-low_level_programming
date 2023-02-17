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
	int i;
	int a;
	
	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		for (a = 0; a < 10; a++)
		{
			if (i != a && i < a)
			{
				if (i != 8 && a != 9)
				{
					putchar('0' + a);
					putchar(',');
					putchar(' ');
				}
				else if (i == 8 && a == 9)
				{
					putchar('0' + a);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
