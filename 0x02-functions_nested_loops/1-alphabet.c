#include <stdio.h>
#include "main.h"

/**
 * main - Enntry into the program
 *
 * Description: a program that prints
 * Return : always return 0 when successful
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	char *alphabets = "abcdefghijklmnopqrstuvwxyz";

	printf("%s\n", alphabets);
}
