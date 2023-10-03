#include <stdio.h>

/**
 * prefix_length - Get the length of the prefix substring
 * @str: The input string
 * @prefix: The prefix to search for
 *
 * Return: The length of the prefix substring, or 0 if not found
 */
unsigned int _strspn(char *s, char *accept)
{
    int index = 0;

	while (str[index] != '\0' && prefix[index] != '\0' && str[index] == prefix[index]) {
	index++;
	}

	return index;
}

int main() {
	const char *myString = "Hello, World!";
	const char *myPrefix = "Hello";

	int length = prefix_length(myString, myPrefix);

	if (length > 0) {
	printf("The length of the prefix '%s' in the string is %d\n", myPrefix, length);
    } else {
	printf("The prefix '%s' was not found in the string\n", myPrefix);
    }

	return 0;
}
