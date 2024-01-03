// Date-> 01/01/24 ,Author Name = Aman Singh

/* 3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are
      stored in an array of size 10. Take array values from the user.  */

#include <stdio.h>
int main()
{
    int array[10], SumOfEven = 0, SumOfOdd = 0;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &array[i]);

    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)
            SumOfEven = SumOfEven + array[i];
        else
            SumOfOdd = SumOfOdd + array[i];
    }

    printf("Sum of all even number is %d.\n", SumOfEven);
    printf("Sum of all odd number is %d.\n", SumOfOdd);
    return 0;
}