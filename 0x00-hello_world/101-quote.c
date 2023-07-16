#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: 1 (Error)
 */
int main(void)
{
    ssize_t len = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1;
    ssize_t written = write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);

    if (written != len)
        return 1;
    return 1;
}
