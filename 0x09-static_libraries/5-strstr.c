#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *hPtr;
	char *nPtr;

	while (*haystack != '\0')
	{
		hPtr = haystack;
		nPtr = needle;

		while (*haystack != '\0' && *nPtr != '\0' && *haystack == *nPtr)
		{
			haystack++;
			nPtr++;
		}
		if (!*nPtr)
			return (hPtr);
		haystack = hPtr + 1;
	}
	return (0);
}
