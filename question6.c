// Date-> 01/01/24 ,Author Name = Aman Singh

// 6. Write a program to sort elements of an array of size 10. Take array values from the user.

#include <stdio.h>
int main()
{
    int arr[10], SortNum;
    printf("Enter 10 number: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < 10; i++)
    {
        SortNum = arr[i];
        for (int j = i; j < 10; j++)
        {
            if (SortNum > arr[j])
            {
                SortNum = arr[j];
                arr[j] = arr[i];
                arr[i] = SortNum;
            }
        }
        printf("%d ", arr[i]);
    }

    return 0;
}