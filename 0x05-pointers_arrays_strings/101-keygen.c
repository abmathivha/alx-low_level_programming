#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * for the program 101-crackme
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char pword[9] = {0};

	srand(time(0));
	for (i = 0; i < 8; i++)
		pword[i] = (rand() % 26) + 'a';
	printf("Password: %s\n", pword);

	return (0);
}
