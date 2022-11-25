#include "main.h"
#include <stdio.h>

/**
 * main - entry point to print fibonacci numbers
 * Return: always 0 on success, -1 on error
 */
int main(void)
{
	int i = 1, j = 2, k = i + j, n;

	printf("%d, %d, ", i, j);
	for (n = k; n <= 50; n++)
	{
		printf("%d, ", k);
		i = j;
		j = k;
		k = i + j;
	}
	putchar('\n');
	return (0);
}
