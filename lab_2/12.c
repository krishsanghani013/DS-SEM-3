// WAP to check whether a number is prime or not(with function).
#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("prime\n", n);
    else
        printf("not a prime number.\n", n);
}