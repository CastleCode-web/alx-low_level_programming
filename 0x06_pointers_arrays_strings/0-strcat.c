#include "main.h"

/**
 * _strcat - function that concactnate strings
 * @dest: first string
 * @src: second string
 * Return: a concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

			for (i = 0; src[i] != '\0'; i++)
			{
				dest[len] = str[i];
				len += 1;
			}
	dest[len] = '\0';
	return (dest);

}
