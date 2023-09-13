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
	if (n > 9)
		printf("%d\n", n % 10);
		return (n % 10);
	else 
		_putchar((n % 10) + '0');
		return (n);
}
