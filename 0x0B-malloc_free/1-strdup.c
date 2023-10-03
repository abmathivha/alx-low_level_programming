#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - prints the number of argumnets
 *
 * @str: argument array
 *
 * Return: return 0
 */

char *_strdup(char *str)
{
	char *temp;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	temp = malloc(sizeof(char) * (len + 1));

	if (temp == NULL)
		return (NULL);

	while ((temp[i] = str[i]) != '\0')
		i++;

	return (temp);
}
