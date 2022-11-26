#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	long int n;
	long int i = 1;
	long int j = 2;
	long int k;

	k = i + j;
	for (n = 1; n <= 10; n++)
	{
		/*k = i + j;*/
		i = j;
		j = k;
		k = i + j;
		/*if ((i / 2 == 0) && (j / 2 == 0))
			k = i + j;
		else
			continue;*/
	}
	printf("%ld\n", k);
	return (0);
}
