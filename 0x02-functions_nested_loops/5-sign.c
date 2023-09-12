#include <stdio.h>
#include "main.h"

/**
 * print_sign - show the sign of an integer value
 *
 * @n: n is an integer value
 * Description: print + if greater thn 0 and - if lless and 0 if zero
 * Return: return 1 if greater, -1 if less than and 0 if zero
 */

int print_sign(int n)
{
	char plus = '+';
	char minus = '-';

	if (n > 0)
	{
		_putchar(plus);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(minus);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
