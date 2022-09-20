#include "main.h"
#include <stdio.h>
/**
 * _puts - prints string
 * @str: string
 */
void _puts(char *str)
{
	int a = 0;

	while(*(str + a) != '\n')
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
