#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always returns 0
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
