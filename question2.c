// Date-> 01/01/24 ,Author Name = Aman Singh

// 2. Write a program to calculate the average of numbers stored in an array of size 10. Take array value from the user.

#include <stdio.h>
int main()
{
    int arry[10], avg, sum = 0;

    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arry[i]);
    for (int i = 0; i < 10; i++)
        sum = sum + arry[i];
    avg = sum / 10;
    printf("Average = %d\n", avg);

    return 0;
}