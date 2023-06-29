#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * return: always 0.
 */

int main(void)
{
	char s1[] = "Hello";
	char s2[] = "world!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s2));
	return (0);
}	
