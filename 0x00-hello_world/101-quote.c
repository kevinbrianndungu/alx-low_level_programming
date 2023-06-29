#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1
 */
int main(void)
{
	ssize_t len;
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	len = 59;
	write(2, str, len);

	return (1);
}
