#include "main.h"

/**
 * print_diagonal - print slash n times
 * @n: number of times to print
 * Return: return void
 */

void print_diagonal(int n)
{
	int tab = 0;
	int i = 1;

	while (i <= n && n > 0)
	{
		while (i > tab)
		{
			_putchar(' ');
			tab++;
		}
		_putchar('\\');
		tab = 0;
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
