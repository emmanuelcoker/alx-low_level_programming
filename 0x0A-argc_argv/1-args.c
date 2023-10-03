#include <stdlib.h>
#include <stdio.h>

/**
 * main - print name of the executable
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
