#include "main.h"
/**
 * _memcpy -> functions copies n bytes from memory area src to memory area dest
 * @dest: memory destination to be copied into
 * @src: memory area to be copied from
 * @n: number of bytes to be copied from memory area
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);

}
