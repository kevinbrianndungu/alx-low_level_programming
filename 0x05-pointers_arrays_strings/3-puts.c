#include <stdio.h>

/**
 * _puts - Prints a string, followed by a newline character, to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
    for (; *str != '\0'; str++)
    {
        putchar(*str);
    }
    putchar('\n');
}
