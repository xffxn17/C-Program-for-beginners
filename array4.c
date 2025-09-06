// write a proram to enter elements of an array and determine the largest element of an array.
#include <stdio.h>
void main()
{
    int a[5], i, largest;
    printf("Enter elements of an array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    largest = a[0];
    for (i = 0; i < 5; i++)
    {
        if (largest < a[i])
        {
            largest = a[i];
        }
    }
    printf("Largest = %d", largest);
}