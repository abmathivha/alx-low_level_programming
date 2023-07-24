#include "main.h"
/**
  * _puts - prints a string
  *
  * @s : a string pointer
  * Return: nothing
  */
void _puts(char *s)
{

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
