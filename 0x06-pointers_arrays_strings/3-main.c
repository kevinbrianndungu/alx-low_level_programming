#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: The array to reverse
 * @n: The number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
        int i;
        int t;

        for (i = 0; i < n / 2; i++)
        {
                t = a[i];
                a[i] = a[n - i - 1];
                a[n - i - 1] = t;
        }
}
