#include "main.h"

/**
 * _pow_recursion - calculate power of number
 * @x: number to exponent
 * @y: exponent
 * Return: return result int
 */

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, (y - 1)));
	}
	return (-1);
}
