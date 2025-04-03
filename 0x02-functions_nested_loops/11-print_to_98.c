#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - prints to 98
 * @n : number to start from
 */

void print_to_98(int n)

{
	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}
}
