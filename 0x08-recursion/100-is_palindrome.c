#include "main.h"

/**
 * _strlen_recursion - return the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s +1));
}

/**
 * Comparator - Compares each character of the string.
 * @s: string
 * @ni:smallest iterator.
 * @n2: biggest iterator.
 * *Return: .
 */
int Comparator (char *s,int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + Comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if S is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == "\0"
			return (1);
	return (comparators(s, 0, _strlen_recursion(s) - 1));
