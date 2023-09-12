#include <stdio.h>
#include "main.h"

/**
  * _isalpha - check if character is an alphabet
  *
  * @c: ascii code for the character
  * Description: a program that determines if a character
  * is a lowercase or uppercase alphabet
  *Return: return 1 if true, 0 if false
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A'  && c <= 'Z'))
		return (1);
	else
		return (0);
}
