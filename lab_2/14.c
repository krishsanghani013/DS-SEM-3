// WAP to find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4)+ …+(1+2+3+4+….+n)  two loops.
// #include <stdio.h>
// void main()
// {
//     int n, sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         int innerSum = 0;
//         for (int j = 1; j <= i; j++)
//         {
//             innerSum += j;
//         }
//         sum += innerSum;
//     }

//     printf("The total sum is: %d\n", sum);
// }

// 2nd way to solve the problem using formula for sum of first n natural numbers:
// #include <stdio.h>
// void main()
// {
//     int n, sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         sum += (i * (i + 1)) / 2;
//     }

//     printf("The total sum is: %d\n", sum);
// }

// 3rd way
#include <stdio.h>
void main()
{
    int n, x=0, sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        x += i;
        sum += x;
    }
    printf("The total sum is: %d\n", sum);
}