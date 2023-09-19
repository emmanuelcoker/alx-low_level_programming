#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: string to be reversed
 * Return: return void
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= '\0')
	{
		if (i > 0)
			_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
