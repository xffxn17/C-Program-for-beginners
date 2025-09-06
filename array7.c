// write a program to enter elements of an array and sort the element in descending order?
#include <stdio.h>
void main()
{
    int a[5], i, j, k;
    printf("Enter the elements of an array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("descending order of Elements of an array are:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}