#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int length = 0;
    int i, j;

    /* Find the length of the string */
    while (s[length] != '\0')
        length++;

    /* Initialize i and j to the start and end of the string */
    i = 0;
    j = length - 1;

    /* Check if the string is a palindrome */
    while (i < j)
    {
        if (s[i] != s[j])
            return 0; /* Not a palindrome */

        i++;
        j--;
    }

    return 1; /* Palindrome */
}
