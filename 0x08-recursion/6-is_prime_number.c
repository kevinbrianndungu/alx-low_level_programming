#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int length = 0;

    /* Get the length of the string */
    while (s[length] != '\0')
        length++;

    /* Check if the string is a palindrome using a recursive helper function */
    return check_palindrome(s, 0, length - 1);
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome recursively.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
    /* Base case: If there is only one character or none, it's a palindrome */
    if (start >= end)
        return 1;

    /* Check if the characters at the current indices are the same */
    if (s[start] != s[end])
        return 0;

    /* Recursively check the remaining characters */
    return check_palindrome(s, start + 1, end - 1);
}
