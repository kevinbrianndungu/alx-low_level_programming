#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert.
 *
 * Return: An integer.
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == '-')
		{
			min *= -1;
		}
		while (s[c] >= '0' && s[c] <= '9')
		{
			isi = 1;
			if ((ni > INT_MAX / 10) || (ni == INT_MAX / 10 && s[c] - '0' > INT_MAX % 10))
			{
				/* Handle overflow */
				if (min == 1)
					return INT_MAX;
				else
					return INT_MIN;
			}
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
	}

	return (ni * min);
}
