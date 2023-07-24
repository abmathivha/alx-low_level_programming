#include <unistd.h>
/**
 * _putchar - print a character to the console
 * @ch: a character to be printed
 *
 * Return: 1 if succesful
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
