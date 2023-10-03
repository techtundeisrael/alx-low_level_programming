#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * contains_any - Searches a string for any of a set of bytes
 * @str: The input string
 * @set: The set of bytes to search for
 *
 * Return: true if any byte in the set is found, false otherwise
 */ 
char *_strpbrk(char *s, char *accept);
{
	for (size_t i = 0; str[i] != '\0'; i++) {
	if (strchr(set, str[i]) != NULL) {
	return true;
	}
	}

	return false;
}

int main() {
	const char *myString = "Hello, World!";
	const char *byteSet = "aeiou";

	bool found = contains_any(myString, byteSet);

	if (found) {
	printf("At least one byte from the set was found in the string.\n");
	} else {
	printf("None of the bytes from the set were found in the string.\n");
	}

	return 0;
}
