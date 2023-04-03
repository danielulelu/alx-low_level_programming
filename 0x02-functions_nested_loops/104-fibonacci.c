#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers, starting with 1
 * Return: Always 0
 */

int main(void)
{
    int count;
    unsigned long fib1 = 1, fib2 = 1, sum;
    unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
    unsigned long half1, half2;

    for (count = 0; count < 92; count++)
    {
    printf("%lu", fib1);
    if (count < 91)
    printf(", ");
    else
    printf("\n");
    sum = fib1 + fib2;
    fib1 = fib2;
    fib2 = sum;
    }

    fib1_half1 = 0;
    fib1_half2 = fib1;
    fib2_half1 = 0;
    fib2_half2 = fib2;

    for (count = 93; count < 99; count++)
    {
    half2 = fib1_half2 + fib2_half2;
    half1 = fib1_half1 + fib2_half1 + (half2 / 10000000000);
    half2 %= 10000000000;
    printf("%lu%010lu", half1, half2);
    if (count < 98)
    printf(", ");

    fib1_half1 = fib2_half1;
    fib1_half2 = fib2_half2;
    fib2_half1 = half1;
    fib2_half2 = half2;
    }
    printf("\n");
    return (0);
}
