#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int a;
	unsigned long int b = 1;
	unsigned long int c = 1;
	unsigned long int d;
	unsigned long int e = 0;

	for (a = 1; a <= 34; a++)
	{
		b = b + c;
		c = b - c;
		if (b > 4000000)
			break;
		d = b % 2;
		if (d == 0)
		{
			e = e + b;
		}
	}
	printf("%lu\n", e);
	return (0);
}
