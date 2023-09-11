#include <stdio.h>

/**
 * main- Entry into the program
 *
 * Description: a program that prints lowercase except q and e
 * Return: Always 0 when successful
 */

int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		if (alphabets[i] != 'q' && alphabets[i] != 'e')
			putchar(alphabets[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
