#include <unistd.h>

int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(message) - 1;
    ssize_t written = write(2, message, len);

    if (written == len)
        return 1;
    else
        return -1;
}
