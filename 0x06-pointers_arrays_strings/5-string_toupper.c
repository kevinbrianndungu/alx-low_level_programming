#include <ctype.h>

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: The string to modify
 *
 * Return: The modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);
		i++;
	}

	return (str);
}
