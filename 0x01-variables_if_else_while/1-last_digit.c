#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Description: program to determing list digit of numbers
 *Return: Always return 0 for success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 == 0)
	{
		printf("is %d and is 0\n", n);
	}
	else
	{
		if ((n % 10 < 6) && (n % 10 != 0))
			printf("is %d and is less than 6 and not 0\n", n);
		else
			printf("is %d and is greater than 5\n", n);
	}
	return (0);
}
