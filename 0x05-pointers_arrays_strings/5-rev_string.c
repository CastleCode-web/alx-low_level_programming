#include "main.h"
/**
 * rev_string - main
 * @s: string
 *
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char c[510];
	int d = 0;

	while (s[a] != '\0')
	{
		c[a] = s[a];
		a++;
	}
	c[a] = '\0';
	d = a;
	for (b = 0; b < d; b++)
	{
		s[b] = c[a - 1];
		a--;
	}
}
