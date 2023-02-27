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
		myrand = (rand() % 125) + 1;
		printf("%d", myrando);
		total -= myrando;
	}
	printf("%d", total);
	return (0);
}
