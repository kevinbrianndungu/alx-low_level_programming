#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - Checks if a given number is a prime number.
 * @n: The input number.
 * 
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return 0; /* 0 and 1 are not prime numbers */
    return check_prime(n, 2);
}

/**
 * check_prime - Helper function to check if a number is prime recursively.
 * @n: The input number.
 * @i: The current divisor to check.
 * 
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
    if (i <= n / 2)
    {
        if (n % i == 0)
            return 0; /* If n is divisible by i, it's not prime */
        else
            return check_prime(n, i + 1); /* Check the next divisor */
    }
    return 1; /* If no divisor found, n is prime */
}
