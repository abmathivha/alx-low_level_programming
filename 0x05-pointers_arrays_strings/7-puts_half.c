#include "main.h"
/**
  * puts_half - print last half of a string
  *
  * @s : a string pointer
  * Return: nothing
  */
void puts_half(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	s -= (length - 1) / 2;
	if (length % 2 == 1)
		s += 1;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
