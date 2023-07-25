#include "main.h"

/**
 *  _strcpy - Copy paste string
 *
 *  @dest: destination
 *  @src: source
 *
 *  Return: dest
 */

char *_strcpy(char *dest, char *src)
{

	while (*src  != '\0')
	{
		*dest  = *src;
		src++;
		dest++;
	}
	*(++dest) = '\0';

	return (dest);
}
