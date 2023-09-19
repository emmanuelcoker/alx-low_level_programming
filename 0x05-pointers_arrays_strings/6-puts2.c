#include "main.h"

/**
 * puts2 - print some characters only
 * @str: string value to print
 * Return: return void
 */

void puts2(char *str)
{
	int i = 0;
	int count = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}

 	while (count <= i)
	{
		_putchar(*(str + count));
		count += 2;
	}
}
