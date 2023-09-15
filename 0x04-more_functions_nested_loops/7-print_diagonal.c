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

	while (i <= n)
	{
		_putchar('\\');
		while (tab < 1)
		{
			_putchar(' ');
			tab++;
		}
		tab = i;
		i++;
		_putchar('\n');
	}
}
