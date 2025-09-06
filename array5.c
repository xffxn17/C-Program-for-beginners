// write a program to enter elements of an array and determine the smallest element of an array.
#include <stdio.h>
void main()
{
    int a[5], i, smallest;
    printf("Enter the elements of an array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    smallest = a[0];
    for (i = 0; i < 5; i++)
    {
        if (smallest > a[i])
        {
            smallest = a[i];
        }
    }
    printf("smallest = %d", smallest);
}