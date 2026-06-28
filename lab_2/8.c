// WAP to find factorial of a number. (Using loop & recursion)
#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("VIYOOOO JAAA!!!\n");
    else
        printf("The factorial is: %d\n", factorial(n));
}