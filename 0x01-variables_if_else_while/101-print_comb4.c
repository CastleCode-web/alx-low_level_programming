#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int x;
        int y;
        int z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '1'; y <= '9'; y++)
		{
			for (z = '2'; z <= '9'; z++)
			{
				if ((x == y) || (y == z))
					continue;
				else if ((y < x) || (z < y))
					continue;
				putchar(x);
				putchar(y);
				putchar(z);
				if ((x != '7') || (y != '8') || (z != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
