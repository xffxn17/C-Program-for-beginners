// write a program to enter the elements of an array and determine the
// sum of an array?
#include <stdio.h>
void main()
{
    int a[5], i, sum = 0;
    printf("Enter the elements of an array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Sum of all the elements is: %d", sum);
}