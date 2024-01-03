// Date-> 01/01/24 ,Author Name = Aman Singh

// 4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include <stdio.h>
int main()
{
    int array[10], GreatestNum;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &array[i]);
    GreatestNum = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > GreatestNum)
            GreatestNum = array[i];
    }
    printf("Greatest number is %d.\n", GreatestNum);

    return 0;
}