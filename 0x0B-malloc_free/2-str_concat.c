#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @str1: The string to be concatenated upon.
 * @str2: The string to be concatenated to str1.
 *
 * Return:the concatenated strings else NULL
 */

char *str_concat(char *str1, char *str2)
{
	char *concat;
	unsigned int i;
	unsigned int j;
	unsigned int len_str1;
	unsigned int len_str2;
	unsigned int len_cat;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";

	for (len_str1 = 0; str1[len_str1] != '\0'; len_str1++)
		;

	for (len_str2 = 0; str2[len_str2] != '\0'; len_str2++)
		;

	len_cat = len_str1 + len_str2;

	concat = malloc((len_cat + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len_str1; i++)
		concat[i] = str1[i];

	for (j = 0; j < len_str2; i++, j++)
		concat[i] = str2[j];

	return (concat);
}
