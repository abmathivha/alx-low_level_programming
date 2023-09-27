#include <unistd.h>
/**
 * _putchar - writes a character c to stdout
 * @c: the character to write
 *
 * Return: 1 if successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
