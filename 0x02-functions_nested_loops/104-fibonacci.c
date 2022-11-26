#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int i = 1;
	int j = 2;
	int k;

	k = i + j;
	printf("%d, %d, ", i, j);
	for (n = 3; n <= 98; n++)
	{
		printf("%d, ", k);
		i = j;
		j = k;
		k = i + j;
	}
	putchar('\n');
	return (0);
}
