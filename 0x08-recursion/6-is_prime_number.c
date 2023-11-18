#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    /* base cases */
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;

    /* check for divisibility by 2 or 3 */
    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    /* check for prime numbers using 6k +/- 1 pattern */
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }

    return 1;
}
