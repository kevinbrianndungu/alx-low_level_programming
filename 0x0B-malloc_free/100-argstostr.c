#include <stdlib.h>

char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
        return NULL;

    int i, j, total_length;
    int k = 0;

    // Calculate the total length of the arguments, including '\n' characters
    for (i = 0, total_length = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            total_length++;
        total_length++; // for '\n' character
    }

    // Allocate memory for the concatenated string
    char *result = (char *)malloc(total_length + 1); // +1 for the null terminator
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
