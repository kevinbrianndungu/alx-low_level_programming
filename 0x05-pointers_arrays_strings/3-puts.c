#include <stdio.h>

/**
 * puts - Prints a string
 * @str - The string to print
 * Return: void
 */

void puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	putchar(*str);
	}
	putchar('\n');
}
