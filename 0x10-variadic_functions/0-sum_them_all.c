#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments.
 * @args: An array of integers containing the arguments.
 *
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, int args[])
{
    int sum = 0;
    unsigned int i;

    for (i = 0; i < n; i++)
        sum += args[i];

    return sum;
}
