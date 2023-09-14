#include <stdio.h>
#include "main.h"

/**
 * _isupper - check if a character is uppercase
 *
 * @c: ascii value of the character
 * Description: a function that checks if a character is uppercase
 * Return: return 0 when successful
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar(1 + '0');
	}
	else
	{
		_putchar(0 + '0');
	}
	return (0);
}
