// Write a program to enter elements of an array and display it.
#include<stdio.h>
int main()
{
    int a[5], i;
    printf("Enter the elements of an array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elemets of an array are:\n");
    for(i=0;i<5;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
}