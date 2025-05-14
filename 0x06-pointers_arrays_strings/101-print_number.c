#include "main.h"
#include <stdio.h>

/**
 * print_number - prints integer
 * @n: interger to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if ((n > 9) && (n < 100))
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if ((n > 99) && (n < 1000))
	{
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar((n % 100) % 10 + '0');
	}
	else if ((n > 999) && (n < 10000))
	{
		_putchar(n / 1000 + '0');
		_putchar((n % 1000) / 100 + '0');
		_putchar(((n % 1000) % 100) / 10 + '0');
		_putchar(((n % 1000) % 100) % 10 + '0');
	}
	else
		_putchar(n + '0');
}
