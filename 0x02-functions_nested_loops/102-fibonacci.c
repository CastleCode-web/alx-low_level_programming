#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 on success
 */
int main(void)
{
	int a;
	unsigned long int b = 1;
	unsigned long int c = 1;

	for (a = 1; a < 50; a++)
	{
		if (a == 1)
			printf("%d", a);
		b = b + c;
		c = b - c;
		printf(", %lu", b);
	}
	printf("\n");
	return (0);
}
