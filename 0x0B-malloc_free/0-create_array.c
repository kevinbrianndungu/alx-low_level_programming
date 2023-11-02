#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes it with a specific character
 * @size: the size of the array
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i; /* Declare 'i' here */

    if (size == 0)
        return (NULL);

    char *array = malloc(size * sizeof(char));

    if (array == NULL)
        return (NULL);

    for (i = 0; i < size; i++) /* Initialize 'i' inside the loop */
    {
        array[i] = c;
    }

    return (array);
}
