#include <stdio.h>
#include "main.h"

/**
 * _abs - convert number to absolute value
 *
 * @n: integer number
 * Description: convert signed integer to absolute val
 * Return: return 0 when successful
 */

int _abs(int n)
{
	if (n >= 0)
		printf("%d\n", n);
	else
		printf("%d\n", (n * -1));
	return (0);
}
