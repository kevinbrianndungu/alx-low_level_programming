#include <stdio.h>

/**
 * _strlen - Returnns the length of a string.
 * @str: The string to get the length of 
 * return: The length of th @str.
 */
size_t _strlen(const char *str)

{ 
	size_t length = 0;
	while (*str++)
	length++;
	return (length);
}
