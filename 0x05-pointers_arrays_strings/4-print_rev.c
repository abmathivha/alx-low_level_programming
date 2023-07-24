#include "main.h"
/**
  * print_rev - prints a string reversed
  *
  * @s : a string pointer
  * Return: nothing
  */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;

	while (length > 0)
	{
		_putchar(*(s--));
		length--;
	}
	_putchar('\n');
}
