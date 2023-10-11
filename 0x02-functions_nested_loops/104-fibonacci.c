#include <stdio.h>

/**
 * main - Prints the Fibonacci sequence, first 98 terms.
 *
 * Description:
 * This program prints the first 98 terms of the Fibonacci sequence,
 * starting with 1 and 2, separated by a comma and a space. It also handles
 * values exceeding the 32-bit integer range.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int i;
    unsigned long int bef = 1;
    unsigned long int aft = 2;
    unsigned long int l = 1000000000;
    unsigned long int bef1;
    unsigned long int bef2;
    unsigned long int aft1;
    unsigned long int aft2;

    printf("%lu", bef);

    for (i = 1; i < 91; i++)
    {
        printf(", %lu", aft);
        aft += bef;
        bef = aft - bef;
    }

    bef1 = (bef / l);
    bef2 = (bef % l);
    aft1 = (aft / l);
    aft2 = (aft % l);

    for (i = 92; i < 99; ++i)
    {
        printf(", %lu%09lu", aft1, aft2);
        aft1 = aft1 + bef1;
        bef1 = aft1 - bef1;
        aft2 = aft2 + bef2;
        bef2 = aft2 - bef2;
    }
    printf("\n");
    return (0);
}
