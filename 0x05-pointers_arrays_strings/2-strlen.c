#include "main.h"
/**
  * _strlen - find length of a string
  *
  * @s : a string pointer
  * Return: length, a length of s
  */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
