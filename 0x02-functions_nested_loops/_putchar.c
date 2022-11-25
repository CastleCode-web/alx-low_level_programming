#include <unistd.h>

/**
 * _putchar - prints character to stdout
 * @c: character to print
 *
 * Return: 0 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
