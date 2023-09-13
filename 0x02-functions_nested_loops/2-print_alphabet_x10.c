#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)

{
	int i;
	for (i = 0; i < 10; i++) {
		char ch;
		for (ch = 'a'; ch <= 'z'; ch++) {
			putchar(ch);
		}		
		putchar('\n');
	}
}

int main(void)
{

    print_alphabet_x10();
    return (0);
}
