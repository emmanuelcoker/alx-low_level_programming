#include <stdlib.h>
#include <stdio.h>

/**
 * main - print product of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 if success, else return 1
*/

int main(int argc, char *argv[])
{
	int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
