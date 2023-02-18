#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: checkson the digit of the assines var
 * Return; Always 0 (success)
 */
int main(void)
{
	int n,m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;if (m > 5)
	{
	printf("Last digit og %d id %d and is less than 6 and not 0\n",m);
	}
	return (0)
}
