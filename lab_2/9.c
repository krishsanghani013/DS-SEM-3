// WAP to find power of a number using loop.
#include <stdio.h>
void main()
{
    int base, pow, result = 1;

    printf("Enter the base & power: ");
    scanf("%d%d", &base, &pow);

    for (int i = 0; i < pow; i++)
    {
        result *= base;
    }

    printf("the power is: %d\n", result);
}