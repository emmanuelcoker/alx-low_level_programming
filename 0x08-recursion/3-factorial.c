#include "main.h"

/**
 * factorial - print factorial of a number
 * @n: number to print factorial
 * Return: return factorial result or -1 if number is less than 0
 */

int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
		{
			return (1);
		}
		return (n * factorial(n - 1));
	}
	return (-1);
}

