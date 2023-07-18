#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints _putchar to the screen
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char *strn = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(strn[i]);
	}
	_putchar('\n');

	return (0);
}
