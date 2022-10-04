#include "main.h"
#include <stddef.h>
/**
 * _strchr - returns a pointer to the first occurence
 * of the character c in the string s or NULL if the
 * character is not found
 *
 * @s: string targeted
 * @c: character targeted
 *
 * Return: returns pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
