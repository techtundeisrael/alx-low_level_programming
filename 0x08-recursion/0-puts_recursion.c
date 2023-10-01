#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Print a string follwed by a new line
 * @s: the string to print
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	s++;
	_puts_recursion(s);
}
