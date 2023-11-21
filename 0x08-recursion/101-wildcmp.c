#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if identical, 0 otherwise.
 * @s1: The first string.
 * @s2: The second string that may contain '*' as a wildcard character.
 *
 * Return: 1 if strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    // If both strings are empty, they are considered identical
    if (*s1 == '\0' && *s2 == '\0')
        return 1;

    // If the current characters match or s2 has a wildcard '*'
    if (*s1 == *s2 || *s2 == '*')
    {
        // Recursively move to the next characters in both strings
        if (*s2 == '*' && (*s1 == '\0' || wildcmp(s1 + 1, s2)))
            return 1;
        // If no wildcard, continue checking the next characters
        else if (*s1 != '\0' && *s2 != '\0')
            return wildcmp(s1 + 1, s2 + 1);
    }

    // If none of the conditions is met, the strings are not identical
    return 0;
}
