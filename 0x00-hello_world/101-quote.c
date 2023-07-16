#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	ssize_t len, written;
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (len = 0; message[len] != '\0'; len++)
		;

	written = write(2, message, len);
	if (written != len)
		return 1;

	return 1;
}
