#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: board to print
 * Return: returns void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;
	unsigned int j;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
