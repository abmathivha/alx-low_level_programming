#include "main.h"
/**
 * print_alphabet - prints a to z
 *
 * Description: prints a to z and a new line
 *
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
