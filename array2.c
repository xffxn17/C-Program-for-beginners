// write a program to enter number of elements and enter
// elements of an arry and display it.
#include <stdio.h>
void main()
{
    int a[10], i, size;
    printf("Enter the size of an array:\n");
    scanf("%d", &size);
    printf("Enter the elements of an array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements of an array are:\n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}