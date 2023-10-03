#include "main.h"

/**
 * _isdigit - checks for a digit between 0 to 9
 * @c: ascii of the number
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
