#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalize.
 *
 * Return: A pinter to the changed string.
 */
char *cap_string(char)
{
	int index = 0;
	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'Z'))
			index++;

		if (str[index - 1] == ' ' ||
			str[index - 1] == ' ' ||
			str[index - 1] == '\t'||
			str[index - 1] == '\n' ||
			str[index - 1] == ',' ||
			str[index - 1] == ';'||
			str[index - 1] == '.' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '"' ||
			str[index - 1] == '(' ||
			str[index - 1] == ')' ||
			str[index - 1] == '{' ||
			str[index - 1] == '}' ||
			index == 0)
			str[index] -= 32;

			index++;

			}

			return (str);
}

