#include <stdio.h>

/**
 * main- Entry point to the program
 *
 * Description: a program to print all digits in decimal
 * Return: Always return 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
