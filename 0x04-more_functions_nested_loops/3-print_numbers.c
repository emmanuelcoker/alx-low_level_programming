#include "main.h"

/**
 * print_numbers - print 0 to 9
 *
 * Description: print numbers from 0 to 9 then a new line
 * Return: no return
 */

void print_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
