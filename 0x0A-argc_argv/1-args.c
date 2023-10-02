#include <stdio.h>

/**
 * main - prints the number of actual argumnets
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: return 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
