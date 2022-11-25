#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success), -1 on error
 */

int main(void)
{
	int n;
	int i = 3;
	int j = 5;
	int k;
	int l;
	int sum;

	for (n = 1; n < 1024; n++)
	{
		k = n * i;
		l = n * j;
		sum = k + l;
		if (sum > 1024)
			break;
	}
	printf("%d\n", sum);
	return (0);
}
