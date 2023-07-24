#include "main.h"
/**
  * print_rev - prints a string reversed
  *
  * @s : a string pointer
  * Return: nothing
  */
void print_rev(char *s)
{
	int size = _strlen(s);

	while (size >= 0)
	{
		_putchar(*(s + size));
		size--;
	}
	_putchar('\n');
}
