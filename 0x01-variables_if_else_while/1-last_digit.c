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
	int remainer;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	remainder = n % 10;
	if (remainder == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, remainder);
	}
	else
	{
		if ((remainder < 6) && (remainder != 0))
			printf("Last digit of %d is %d and is
			less than 6 and not 0\n", n, remainder);
		else
			printf("Last digit of %d is %d
			and is greater than 5\n", n, remainder);
	}
	return (0);
}
