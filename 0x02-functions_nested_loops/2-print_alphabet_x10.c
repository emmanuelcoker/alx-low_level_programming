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
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
