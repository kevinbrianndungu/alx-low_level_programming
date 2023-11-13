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

    int i, j;
    int len, total_len = 0;
    char *str;

    for (i = 0; i < ac; i++)
    {
        len = 0;
        while (av[i][len])
            len++;
        total_len += len + 1; /* Add 1 for the newline character */
    }

    /* Allocate memory for the concatenated string */
    str = malloc(sizeof(char) * (total_len + 1));
    if (str == NULL)
        return (NULL);

    /* Concatenate the arguments */
    for (i = 0, j = 0; i < ac; i++)
    {
        len = 0;
        while (av[i][len])
            str[j++] = av[i][len++];
        str[j++] = '\n'; /* Add newline character */
    }

    str[j] = '\0'; /* Null-terminate the string */

    return (str);
}
