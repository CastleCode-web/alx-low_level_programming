#include "3-calc.h"

/**
 * op_add - calculates the sum of 2 integers
 * @a: the first integer parameter
 * @b: the second integer parameter
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of 2 integers
 * @a: the first integer bparameter
 * @b: the second integer parameter
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of 2 integers
 * @a: the first integer parameter
 * @b: the second integer parameter
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of 2 integers
 * @a: the first integer parameter
 * @b: the second integer parameter
 *
 * Return: the output of division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - calculates the remaider value of the division of 2 integers
 * @a: the first integer parameter
 * @b: the second integer parameter
 *
 * Return: the remainder output of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
