#include "main.h"

/**
 * _isupper -  Checks if a character is an uppercase letter
 * @C: The character to checked
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{	
		return (0);
	}
	
}
