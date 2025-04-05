#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int a;
        unsigned long int b = 1;
        unsigned long int c = 1;

        for (a = 1; a <= 98; a++)
        {
                if (a == 1)
                        printf("%d", a);
                b = b + c;
                c = b - c;
                printf(", %lu", b);
        }
        printf("\n");
        return (0);
}
