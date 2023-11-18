#include "main.h"

int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number.
 * 
 * Return: The natural square root of the number, or -1 if it does not exist.
 */
int _sqrt_recursion(int n)
{
    return find_sqrt(n, 1);
}

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The input number.
 * @i: The current value to check for square root.
 * 
 * Return: The natural square root of the number, or -1 if it does not exist.
 */
int find_sqrt(int n, int i)
{
    if (n < 0)
        return -1; /* Return -1 to indicate an error for n < 0 */
    else if (n == 0)
        return 0; /* Square root of 0 is 0 */
    else if (i * i > n)
        return -1; /* If i*i exceeds n, n does not have a natural square root */
    else if (i * i == n)
        return i; /* If i*i is equal to n, i is the square root of n */
    else
        return find_sqrt(n, i + 1); /* Recursive call to check the next value */
}
