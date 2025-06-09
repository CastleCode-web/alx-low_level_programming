#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: string to located from
 * @c: character to locate
 *
 * Return: returns pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	/**
	 * *s dereference s to access each character
	 * it cuts the character from the string before
	 * moving to the next
	 */
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
