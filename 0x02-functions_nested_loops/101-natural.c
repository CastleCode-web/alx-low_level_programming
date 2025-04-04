#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d = 0;

	for (a = 3; a < 1024; a++)
	{
		b = a % 3;
		c = a % 5;
		if ((b == 0) || (c == 0))
		{
			d = d + a;
		}
	}
	printf("%d\n", d);
	return (0);
}
