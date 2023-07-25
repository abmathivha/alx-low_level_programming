#include "main.h"
/**
  *  puts2 - prints every other element of  a string
  *
  * @s : a string pointer
  * Return: nothing
  */
void puts2(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		if (*(s + 1) == '\0')
			break;
		s = s + 2;
	}
	_putchar('\n');
}
