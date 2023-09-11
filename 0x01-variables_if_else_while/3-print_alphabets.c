#include <stdio.h>

/**
 * main- Entry into the program
 *
 * Description: a program that prints lowercase and uppercase alphabets
 * Return: Always 0 when successful
 */

int main(void)
{
	char alphabets = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(alphabets[i]);
		if (alphabets[i] == 'z' || alphabets[i] == 'Z')
		{
			putchar('/n');
		}
	}
	return (0);
}
