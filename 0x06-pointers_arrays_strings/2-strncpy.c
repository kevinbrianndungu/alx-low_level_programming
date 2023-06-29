#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to copy
 *
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
        int j;

        j = 0;
        while (j < n && src[j] != '\0')
        {
                dest[j] = src[j];
                j++;
        }
        while (j < n)
        {
                dest[j] = '\0';
                j++;
        }
        return (dest);
}
