#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments.
 *
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
    int sum = 0;
    unsigned int i;

    va_list args;
    va_start(args, n);

    for (i = 0; i < n; i++)
        sum += va_arg(args, int);

    va_end(args);

    return sum;
}
