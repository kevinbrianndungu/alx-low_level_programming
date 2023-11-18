#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The input number.
 * 
 * Return: The factorial of the number, or -1 if an error occurs.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1); /* Return -1 to indicate an error for n < 0 */
	else if (n == 0 || n == 1)
		return (1); /* Factorial of 0 and 1 is 1 */
	else
		return (n * factorial(n - 1)); /* Recursive call for n * (n - 1)! */
}
