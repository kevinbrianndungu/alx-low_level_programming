#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
        return NULL;

    int total_length = 0;
    int i, j, k = 0;

    // Calculate the total length of the arguments, including '\n' characters
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            total_length++;
        total_length++; // for '\n' character
    }

    // Allocate memory for the concatenated string
    char *result = malloc(total_length + 1); // +1 for the null terminator
    if (result == NULL)
        return NULL;

    // Copy each argument to the result string
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            result[k] = av[i][j];
            k++;
        }
        result[k] = '\n'; // Add '\n' after each argument
        k++;
    }

    result[k] = '\0'; // Add null terminator at the end

    return result;
}
