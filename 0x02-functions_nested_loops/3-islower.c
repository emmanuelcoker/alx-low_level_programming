#include <stdio.h>
#include "main.h"

/**
 * _islower - check if letter is lowercase
 *
 * @c: ascii code value for the character
 * Description: a functionn to check if character is lowercase
 * Return: return 1 if true and 0 if false
 */

int _islower(int c)
{
	char letter_a = 'a';
	char letter_z = 'z';

	if (c >= letter_a && c <= letter_z)
		return (1);
	else
		return (0);
}
