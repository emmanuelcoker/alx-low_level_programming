#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - display minutes of the day
 *
 * description: print minutes of the day with new line
 * Return: return nothing when successful
 */

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			if (hours < 10)
			{
				_putchar('0' + 0);
			}
			_putchar('0' + hours);
			_putchar(58);
			if (minutes < 10)
			{
				_putchar('0' + 0);
			}
			_putchar('0' + minutes);
			_putchar('\n');
		}
	}
}
