#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_nimber - Returns if a number is prime
 * @n: the number to be checked
 *
 * Return: integer vslue
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Check if number is prime
 * @n: the number to be checked
 * @i: the iterartion times
 *
 * Return: 1 for prime or 0 composite
 */
