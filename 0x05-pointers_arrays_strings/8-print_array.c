#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array
 * @a: array
 * @n: number
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (b = 0; b < n; b++)
	{
		if (b != n - 1)
		{
			printf("%d", a[b]);
		}
	}
	putchar('\n');
}
