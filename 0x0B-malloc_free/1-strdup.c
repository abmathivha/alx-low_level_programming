#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - prints the number of argumnets
 *
 * @count: argument count
 *
 * Return: return 0
 */

char *_strdup(char *count)
{
	char *new_arr;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (count == NULL)
		return (NULL);

	while (count[len])
		len++;

	new_arr = malloc(sizeof(char) * (len + 1));

	if (new_arr == NULL)
		return (NULL);

	while ((new_arr[i] = str[i]) != '\0')
		i++;

	return (new_arr);
}
