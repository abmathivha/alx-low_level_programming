#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints the number of argumnets
 * @size: number of  arguments
 * @argc: array of arguments
 *
 * Return: return 0
 */

char *create_array(unsigned int size, char argc)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		str[i] = argc;
		i++;
	}
	return (str);
	free(str);
}
