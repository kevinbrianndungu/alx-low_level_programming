#include "main.h"
/**
 * reverse_array - reverse array of array
 * @a: array
 * @n: number of elements of array
 * return: void 
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for ( i = 0; < n--; i++)
	{
		t = a[i];
		a[i] =a[n];
		a[n] = t;
	}
}
