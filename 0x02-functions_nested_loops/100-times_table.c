#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints times table
 * @n: integer to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int a;
	int mul;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mul = i * j;
			if (n > 15 || n < 0)
				break;
			else if (mul > 9 && mul < 100)
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
			else if (mul > 99)
			{
				a = mul / 10;
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
				_putchar(mul % 10 + '0');
			}
			else
				_putchar(mul + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
