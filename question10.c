// Date-> 01/03/24 ,Author Name = Aman Singh

// 10. Write a program in C to copy the elements of one array into another array.Take array values from the user.

#include <stdio.h>
int main()
{
    int arr[5], dublicateArr[5];
    printf("enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < 5; i++)
        dublicateArr[i] = arr[i];

    for (int i = 0; i < 5; i++)
        printf("dublicateArr[%d] = %d, ", i, dublicateArr[i]);

    return 0;
}
