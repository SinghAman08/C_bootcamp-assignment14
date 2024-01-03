// Date-> 01/01/24 ,Author Name = Aman Singh

// 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.

#include <stdio.h>
int main()
{
    int array[10], SmallestNum;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &array[i]);

    SmallestNum = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] < SmallestNum)
            SmallestNum = array[i];
    }
    printf("Smallest number is %d.\n", SmallestNum);
    return 0;
}