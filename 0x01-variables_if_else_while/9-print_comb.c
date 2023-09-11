#include <stdio.h>

/**
 * main - Entry into the program
 *
 * Description: a program to print combination of single
 * digit numbers separated with comma
 * Return: Always return 0 when successful
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
