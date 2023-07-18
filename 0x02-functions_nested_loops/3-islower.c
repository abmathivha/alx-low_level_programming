#include "main.h"
/**
 * _islower - prints a to z ten times
 *
 * Description: determines if a char is lower
 * @c: the input char
 *
 * Return: 1 if char is lower
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);  /* Character is lowercase */
	}
	return (0);  /* Character is not lowercase */
}
