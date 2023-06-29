#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Return: Pointer to the result string, or 0 if the result cannot fit.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i, j, k;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;

	if (i > size_r || j > size_r)
		return (0);

	r[size_r - 1] = '\0';
	for (i--, j--, k = size_r - 2; k >= 0; i--, j--, k--)
	{
		int sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (i < 0 && j < 0 && sum == 0)
			break;
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
	}

	if (i >= 0 || j >= 0 || k < 0)
		return (0);

	return (&r[k + 1]);
}

int main(void)
{
	char n1[] = "123456789";
	char n2[] = "987654321";
	char result[20];

	char *res = infinite_add(n1, n2, result, sizeof(result));
	if (res != 0)
		printf("Result: %s\n", res);
	else
		printf("Unable to store the result.\n");

	return (0);
}
