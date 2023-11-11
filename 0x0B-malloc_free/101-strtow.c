#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: Pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int i, j, k, words, len;
    char **result;

    for (i = 0, words = 0; str[i] != '\0'; ++i)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            words++;
    }

    if (words == 0)
        return NULL;

    result = malloc((words + 1) * sizeof(char *));
    if (result == NULL)
        return NULL;

    for (i = 0, k = 0; k < words; ++i)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            for (len = 0, j = i; str[j] != ' ' && str[j] != '\0'; ++j, ++len)
                ;

            result[k] = malloc((len + 1) * sizeof(char));
            if (result[k] == NULL)
            {
                for (j = 0; j < k; ++j)
                    free(result[j]);
                free(result);
                return NULL;
            }

            for (j = 0; j < len; ++j, ++i)
                result[k][j] = str[i];
            result[k][j] = '\0';
            k++;
        }
    }

    result[k] = NULL;

    return result;
}
