#include "main.h"
/**
 * _isalpha - detects if an input ia an alpha
 * @c: input char
 * Description: determines if a char is alpha
 *
 * Return: 1 if char is alpha
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
