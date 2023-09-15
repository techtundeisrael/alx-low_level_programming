#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks if a character is aa digit
 * @c: The character to be checked
 *
 * Returns 1 if c is a digits 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else 
	{
		return (0);
	}

}
