#include <stdio.h>

/**
 * main - this prints the name of the program
 * @argc: number of arguments
 * @argv: number of arguments
 *
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
