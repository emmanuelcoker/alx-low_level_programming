#include "main.h"

/**
 * _strlen - get length of a string
 * @s: reference to the string
 * Return: return the string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
