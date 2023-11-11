#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to the concatenated string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
        return (NULL);

    int total_len = 0;
    int i, j, k;
    char *result;

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
            total_len++;
        total_len++; /* for the new line character */
    }

    result = malloc(sizeof(char) * (total_len + 1));

    if (result == NULL)
        return (NULL);

    k = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
            result[k++] = av[i][j];
        result[k++] = '\n';
    }

    result[k] = '\0';

    return (result);
}
