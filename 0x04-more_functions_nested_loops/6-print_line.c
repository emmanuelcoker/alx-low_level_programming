#include "main.h"

/**
 * print_line - print underscore n times
 * @n: number of times to print underscore
 * Return: return void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
}
