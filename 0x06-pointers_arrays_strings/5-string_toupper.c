#include "main.h"

/**
 * *string_toupper - convert characer to uuppercase
 * @str: characters to be cinverted
 * Return: return char
 */

char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (str);
}

