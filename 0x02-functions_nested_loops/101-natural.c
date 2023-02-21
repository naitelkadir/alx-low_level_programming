#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, s;
	s = 0;
	
	for (i = 0; i < 1024; i++)
	{
			if (i % 3 == 0 || i % 5 == 0)
			{
				s = s + i;
			}
	}
	printf("%d\n", s);
	return (0);
}
