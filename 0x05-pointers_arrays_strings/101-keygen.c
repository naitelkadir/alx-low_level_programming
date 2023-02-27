#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int myrando;
	int c;
	int total;

	srand(time(NULL));
	for (c = 0, total = 2772; total > 122; c++)
	{
		myrando = (rand() % 125) + 1;
		printf("%c", myrando);
		total -= myrando;
	}
	printf("%c", total);
	return (0);
}
