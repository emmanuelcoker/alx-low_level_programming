#include "main.h"

/**
 * calc_sqrt - perform operation to calc sqrt of number
 * @n: number
 * @p: power of root
 * Return: return square root
 */

int calc_sqrt(int n, int p)
{
	if (p % (n / p) == 0)
	{
		if (p * (n / p) == n)
			return (p);
		else
			return (-1);
	}
	return (calc_sqrt(n, p + 1));
}

/**
 * _sqrt_recursion - perform square root
 * @n: number
 * Return: return square root or -1 or 1 or 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (calc_sqrt(n, 2));
	}
}
