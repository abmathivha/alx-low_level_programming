#include "main.h"
/**
 * print_alphabet - prints a to z ten times
 *
 * Description: prints a to z and a new line
 *
*/
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
