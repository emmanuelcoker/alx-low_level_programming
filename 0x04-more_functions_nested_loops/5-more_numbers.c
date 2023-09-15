#include "main.h"

/**
 * more_numbers - print numbers 0 to 14 ten times
 *
 * Description: print 0 to 14 ten times using _putchar
 * Return: return void
 */

void more_numbers(void)
{
	int i = 0;
	int ch = 0;

	while (i < 10)
	{
		while (ch <= 14)
		{
			if (ch >= 10)
			{
				_putchar((ch / 10) + '0');
			}
				_putchar((ch % 10) + '0');
			ch++;
		}
		ch = 0;
		_putchar('\n');
		i++;
	}
}
