#include<stdio.h>
/**
  *main - Entry to the program
  *
  *description: a program that transforms a letter into lowercase
  *return: Always 0 for success
  */

int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(alphabets[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
