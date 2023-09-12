#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - subroutine
 *
 *Description: a function that prints
 *Return : always return void when successful
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
