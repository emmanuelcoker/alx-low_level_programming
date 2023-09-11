#include <stdio.h>

/**
 * main - Entry into the program
 *
 * Description: A program to print hexadecimal digits using putchar
 * Return: Always  return 0 when successful
 */

int main(void)
{
	char hexa_digits[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(hexa_digits[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
