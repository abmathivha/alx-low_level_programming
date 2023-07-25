#include "main.h"
/**
  * rev_string - reverses a string
  *
  * @s : a string pointer
  * Return: nothing
  */
void rev_string(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;

	char temp;
	int i = 0;

	while (i < length / 2)
	{
		temp = *(s - i);
		*(s - i) = *(s - length + 1 + i);
		*(s - length + 1 + i) = temp;
	}
}
