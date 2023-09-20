#include "main.h"

/**
 * puts_half - print other half of string
 * @str: string to pring half
 * Return: return void
 */

void puts_half(char *str)
{
	int i = 0;
	int count;

	while (str[i] != '\0')
	{
		i++;
	}

	count = i / 2;
	while (count < i)
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
