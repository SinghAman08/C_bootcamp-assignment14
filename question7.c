// Date-> 01/01/24 ,Author Name = Aman Singh

// 7. Write a program to find second largest in an array.Take array values from the user.

#include <stdio.h>
int main()
{
    int arr[10], FirstLargestNum, SecondLargestNum;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    FirstLargestNum = arr[0];
    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            for (int j = i; j < 10; j++)
            {
                if ((arr[j] > FirstLargestNum))
                {
                    FirstLargestNum = arr[j];
                    arr[j] = arr[i];
                    arr[i] = FirstLargestNum;
                }
            }
        }
        else
        {
            SecondLargestNum = arr[i];
            for (int j = i; j < 10; j++)
            {
                if (SecondLargestNum < arr[j])
                        SecondLargestNum = arr[j];
            }
            printf("Second largest Number is %d.\n", SecondLargestNum);
        }
    }
    return 0;
}