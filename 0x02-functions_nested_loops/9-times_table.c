#include <stdio.h>
#include "main.h"

/**
 * times_table - print times table
 *
 * Description: print table 9
 * Return: return void
 */

void times_table(void)
{
	int row = 0;
	int col = 0;
	int multiple;
	int limit = 9;

	for (row = 0; row <= limit; row++)
	{
		for (col = 0; col <= limit; col++)
		{
			multiple = row * col;
			if (multiple > 10)
			{
				_putchar((multiple / 10) + '0');
				_putchar((multiple % 10) + '0');
			}
			else
			{
				_putchar(multiple + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
