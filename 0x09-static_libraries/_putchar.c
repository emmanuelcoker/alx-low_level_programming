#include "main.h"
#include <unistd.h>

/**
 * _putchar - print character
 * @c: character
 * Description: A program to print char
 * Return: return char when successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
