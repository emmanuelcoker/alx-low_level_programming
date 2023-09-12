#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10: subroutine to print alphabet
 *
 * Description: print alphabets ten times
 * Return: return void
 */


void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}

	_putchar('\n');
}
