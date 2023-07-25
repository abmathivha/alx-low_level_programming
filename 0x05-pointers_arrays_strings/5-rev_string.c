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
	int i = 0;
	char temp;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;

	while (i < length / 2)
	{
		temp = *(s - i);
		*(s - i) = *(s - length + 1 + i);
		*(s - length + 1 + i) = temp;
	}
}
