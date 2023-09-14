#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print natural numbers to 98
 *
 * @n: natural number
 * Description: print all natural numbers from specified point
 * Return: returns void
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 10)
		{
			_putchar(n + '0');
		}
		else
		{
			printf("%d", n);
		}
		_putchar(',');
		_putchar(' ');

		if (n <= 98)
			n++;
		else
			n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
