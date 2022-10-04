#include "main.h"
/**
 * _strcpy - copy string
 * @dest: dest
 * @src: parameter
 * Return: char dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != 0)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = src[a];
	return (dest);
}
