// Date-> 01/02/24 ,Author Name = Aman Singh

// 9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int arr[x];
    printf("Enter %d Numbers: ", x);
    for (int i = 0; i < x; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < (x / 2); i++)
    {
        int num = arr[i], j = (x - i) - 1;
        arr[i] = arr[j];
        arr[j] = num;
    }
    for (int i = 0; i < x; i++)
        printf("%d ", arr[i]);

    return 0;
}