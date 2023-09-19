#include "main.h"

/**
 * puts2 - print some characters only
 * @str: string value to print
 * Return: return void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n')
}
