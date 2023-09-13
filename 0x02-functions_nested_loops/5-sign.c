#include "main.h"
/**
 * print_sign - Prints the sign of aaa number
 * @n: the number to be checked
 * Return: 1 for positve num, -1 for negative num or zero for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(48);
		return (1);

	}
	else if (n < 0)
	{
		_putchar(45);
		return(-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
