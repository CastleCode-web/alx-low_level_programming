#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: source string
 * @needle: the substring
 *
 * Return: a pointer to the begining of the located substring,
 * or NULL, if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
		while (*haystack)
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
			haystack++;
		}
		return (NULL);
}
