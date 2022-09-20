#include "main.h"
/**
 * swap_int - swap both parameters
 * @a: int parameter 1
 *
 * @b: int parameter 2
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
