#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit of number
 *
 * @n: integer number
 * Description: a function to print last digit of a number
 * Return: return last digit
 */

int print_last_digit(int n)
{
	int k;

	if (n > 0)
	{
		k =  n % 10;
		_putchar('o' + k);
		return (k);
	}
	else
	{	k = -1 * (n % 10);
		_putchar('o' + k);
		return (k);
	}

}
