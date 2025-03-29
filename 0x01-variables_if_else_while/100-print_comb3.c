#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int x;
        int y;

        for (x = '0'; x <= '9'; x++)
        {
                for (y = '1'; y <= '9'; y++)
                {
                        if (x == y)
                                continue;
                        else if (y < x)
                                continue;
                        putchar(x);
                        putchar(y);
                        if (x != '8' || (y != '9'))
                        {
                                putchar(',');
                                putchar(' ');
                        }
                }
        }
        putchar('\n');
        return (0);
}
