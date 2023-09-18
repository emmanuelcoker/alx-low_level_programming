#include "main.h"

/**
 * _puts - print string using putchar
 * @str: string value to be printed
 * Return: return void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
