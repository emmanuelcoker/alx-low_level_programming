#include <stdio.h>

/**
 * main - Entry into the program
 *
 * Description: program to print alphabets in reverse
 * Return: always return 0 successful
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
