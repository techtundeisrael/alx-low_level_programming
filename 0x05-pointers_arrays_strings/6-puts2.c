#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a strong
 * @str: The string to be treted
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int j;

	while (str[j] != '\0')
	{
	j++;
	}

	for (i = 0; i < j; i += 2)
	{
	putchar(str[i]);
	}
	putchar('\n');
	return 0;
}
