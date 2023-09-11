#include<stdio.h>

/**
 * main - Entry into the program
 *
 * Description: print digits using putchar
 * Return: returns 0 when successful
 */

int main(void)
{
	int i = 0;

	while (i < 10)
		putchar((char) i);
	putchar('\n');
	return (0);
}
