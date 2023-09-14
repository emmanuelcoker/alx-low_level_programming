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
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
