#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

char *generate_password(void)
{
    char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));
    if (password == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    srand(time(NULL));

    int i;
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = rand() % 94 + 33; /* Generate random printable ASCII characters */
    }
    password[PASSWORD_LENGTH] = '\0';

    return password;
}

int main(void)
{
    char *password = generate_password();
    printf("Generated Password: %s\n", password);
    free(password);

    return 0;
}
