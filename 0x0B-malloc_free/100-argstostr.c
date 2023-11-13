#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
        return (NULL);

    int i;
    int j;
    int len;
    int total_len = 0;
    char *str;

    i = 0;
    while (i < ac)
    {
        len = 0;
        while (av[i][len])
            len++;
        total_len += len + 1; /* Add 1 for the newline character */
        i++;
    }

    /* Allocate memory for the concatenated string */
    str = malloc(sizeof(char) * (total_len + 1));
    if (str == NULL)
        return (NULL);

    i = 0; // Move the declaration to the beginning of the block

    /* Concatenate the arguments */
    j = 0;
    while (i < ac)
    {
        len = 0;
        while (av[i][len])
            str[j++] = av[i][len++];
        str[j++] = '\n'; /* Add newline character */
        i++;
    }

    str[j] = '\0'; /* Null-terminate the string */

    return (str);
}
