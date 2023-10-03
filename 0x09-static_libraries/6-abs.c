#include "main.h"

/**
 * _abs - convert number to absolute value
 *
 * @n: integer number
 * Description: convert signed integer to absolute val
 * Return: return abscolute value or n
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}
