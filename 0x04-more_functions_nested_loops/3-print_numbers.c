#include "main.h"

/**
 * print_numbers - print 0 to 9
 *
 * Description: print numbers from 0 to 9 then a new line
 * Return: return type is void
 */

void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
