// Date-> 01/01/24 ,Author Name = Aman Singh

// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.

#include <stdio.h>
int main()
{
    int array[10], cal = 0;
    printf("Enter 10 value to store in array[10]: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &array[i]);
    for (int i = 0; i < 10; i++)
        cal = cal + array[i];
    printf("Sum = %d\n", cal);
    return 0;
}
