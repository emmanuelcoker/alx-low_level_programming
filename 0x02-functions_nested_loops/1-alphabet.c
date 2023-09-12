#include <stdio.h>
#include "main.h"

/**
 *main - Enntry into the program
 *
 *Description: a program that prints
 *Return : always return 0 when successful
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
