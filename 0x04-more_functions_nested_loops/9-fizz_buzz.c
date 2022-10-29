#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers 1 - 100, followed by a new line
 * but prints "fizz" for multiples of 3's
 * and prints "buzz" for multiples of 5's
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
