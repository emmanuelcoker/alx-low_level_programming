#include <stdio.h>
#include "main.h"

/**
 * main - Enntry into the program
 *
 * Description: a program that prints
 * Return : always return 0 when successful
 */

void print_alphabet()
{
	char *alphabets = "abcdefghijklmnopqrstuvwxyz";

	printf("%s\n", alphabets);
}

int main(void)
{
	print_alphabet();
	return (0);
}
