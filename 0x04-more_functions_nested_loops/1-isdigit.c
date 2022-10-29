#include "main.h"

/**
 * _isdigit - checks for digits between 0 and 9
 * @c: int to be checked
 *
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
