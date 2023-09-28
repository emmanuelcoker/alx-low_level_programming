#include "main.h"

/**
 * is_prime_number - check if number is prime
 * @n: number
 * Return: return 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if ((n % 2 == 0)
		|| (n % 3 == 0)
		|| (n % 4 == 0)
		|| (n % 5 == 0)
		|| (n % 6 == 0)
		|| (n % 7 == 0)
		|| (n % 8 == 0)
		|| (n % 9 == 0)
	)
	{
		return (0);
	}
	return (1);
}
