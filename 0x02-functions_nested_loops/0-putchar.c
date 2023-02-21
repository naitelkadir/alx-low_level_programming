#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *sh = "_putchar";
	
	while (*sh)
	{
		_putchar(*sh);
		sh = sh + 1;
	}
	putchar('\n');
	return (0);
}
