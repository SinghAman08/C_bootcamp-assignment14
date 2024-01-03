// Date-> 01/02/24 ,Author Name = Aman Singh

// 8. Write a program to find the second smallest number in an array.Take array values from the user.

#include <stdio.h>
int main()
{
    int arr[10], FirstSmallestNum, SecondSmallestNum;
    printf("Enter 10 Numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            FirstSmallestNum = arr[i];
            for (int j = i; j < 10; j++)
            {
                if (FirstSmallestNum > arr[j])
                {
                    FirstSmallestNum = arr[j];
                    arr[j] = arr[i];
                    arr[i] = FirstSmallestNum;
                }
            }
        }
        else
        {
            SecondSmallestNum = arr[i];
            for (int j = i; j < 10; j++)
                if (SecondSmallestNum > arr[j])
                    SecondSmallestNum = arr[j];
            printf("Second Smallest Number is %d.\n", SecondSmallestNum);
        }
    }

    return 0;
}
