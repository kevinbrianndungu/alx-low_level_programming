#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1
 */
int main(void)
{
	ssize_t len, written;

	len = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1;
	written = write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);

	if (written == len)
		return (1);
	else
		return (-1);
}
