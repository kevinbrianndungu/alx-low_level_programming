#include "main.h"

/* Function prototype */
int check_prime(int n, int i);

/**
 * is_prime_number - Check if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return 0;  /* 0 and 1 are not prime numbers */

    return check_prime(n, 2);  /* Start checking from 2 */
}

/**
 * check_prime - Helper function to check if a number is prime recursively.
 * @n: The number to check.
 * @i: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
    if (i == n)
        return 1;  /* If we reached the number itself, it's prime */

    if (n % i == 0)
        return 0;  /* If n is divisible by i, it's not prime */

    return check_prime(n, i + 1);  /* Check the next divisor */
}
