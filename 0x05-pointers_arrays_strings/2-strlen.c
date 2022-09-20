#include "main.h"
#include <stdio.h>
/**
 * _strlen - print size of string parameter
 * Return: length of string
 * @s: pointer to arrays of character
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
	return (a);
}
