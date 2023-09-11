#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	char number = '0';
	char letter = 'a';

	while (number <= '9')
	{

		putchar(number);
		number++;
	}

	while (letter <= 'f')

	{

		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}

