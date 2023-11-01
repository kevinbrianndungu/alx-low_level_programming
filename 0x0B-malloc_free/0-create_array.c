#include "main.h"
#include <stdlib.h>

/**
 *char -create an array of size unsigned 
 *@size - size of the array
 *@c - character to be assigned 
 *
 *
 */

char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return (NULL);

    char *array = malloc(size * sizeof(char));

    if (array == NULL)
        return (NULL);

    for (unsigned int i = 0; i < size; i++)
    {
        array[i] = c;
    }

    return (array);
}
