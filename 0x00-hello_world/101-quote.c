/**
 * main - prints a statement using write, and goes to a new line
 * Return: 1 always
 */
#include <unistd.h>
#include <string.h>

int main(void)
{
	/* Outputing a message and a new line */
	const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t bytesWritten = write(2, message, strlen(message));
	return (0);
}
