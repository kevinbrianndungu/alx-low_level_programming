#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The input string.
 */
void _print_rev_recursion(char *s)
{
    if (*s != '\0')
    {
        _print_rev_recursion(s + 1); /* Recursively call the function with the next character */
        _putchar(*s); /* Print the current character */
    }
}
