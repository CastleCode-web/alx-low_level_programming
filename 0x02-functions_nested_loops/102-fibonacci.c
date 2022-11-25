#include "main.h"
#include <stdio.h>

/**
 * print_fib - prints fibonacci numbers
 * Return: void
 */
void print_fib(void)
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
	_putchar('\n');
}
