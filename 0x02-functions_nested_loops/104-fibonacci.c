#include <stdio.h>
#include <inttypes.h>
/**
 * main - print first 50 fibonacci
 *
 * Return: 0 always.
 */
int main(void)
{
	unsigned __int128 prev = 1, cur = 2, next = 0;
	int i;

	for (i = 0; i < 97; i++)
	{
		printf("%llu, ",(unsigned long long) prev);
		next  = cur + prev;
		prev = cur;
		cur = next;
		if (i == 96)
			printf("%llu\n",(unsigned long long)prev);
	}
	return (0);
}
