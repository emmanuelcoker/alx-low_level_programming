#include "main.h"

/**
 * _strlen_recursion - print length of string with recursion
 * @s: string to count
 * Return: return string length as int
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion((s + 1)));
	}
	return (0);
}
