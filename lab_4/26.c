// 26. Write a program to insert a number in an array that is already sorted in an
// ascending order.
#include <stdio.h>
void main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d numbers in ascending order:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int num;
    printf("Enter the number to insert: ");
    scanf("%d", &num);

    int pos = n; // Default position is at the end
    for (int i = 0; i < n; i++)
    {
        if (num < arr[i])
        {
            pos = i;
            break;
        }
    }

    // Shift right
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    
    // Insert specified position
    arr[pos] = num;

    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



// Algorithm:
// 1. Read the value of n (number of elements in the array).
// 2. Declare an array of size n+1 to accommodate the new element.
// 3. Read n numbers in ascending order into the array.
// 4. Read the number to be inserted.
// 5. Find the correct position to insert the new number while maintaining the ascending order.
// 6. Shift elements to the right from the found position.
// 7. Insert the new number at the found position.
// 8. Print the updated array.