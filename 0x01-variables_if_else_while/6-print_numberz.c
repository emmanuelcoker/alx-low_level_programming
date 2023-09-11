#include<stdio.h>

/**
 * main - Entry into the program
 *
 * Description: print digits using putchar
 * Return: returns 0 when successful
 */

int main(void)
{
	int i = 48;

	while (i < 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
