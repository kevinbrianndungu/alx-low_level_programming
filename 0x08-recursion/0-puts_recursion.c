#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');  // Print a new line when the end of the string is reached
        return;
    }

    _putchar(*s);      // Print the current character
    _puts_recursion(s + 1);  // Move to the next character in the string
}
