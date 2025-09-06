<<<<<<< HEAD
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
=======
//write a program to enter the elements of an array and determine the 
//sum of an array?
#include<stdio.h>
void main()
{
    int a[5],i,sum=0;
    printf("Enter the elements of an array:\n");
    for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
    sum=sum+a[i];
}
printf("Sum of all the elements is: %d",sum);
>>>>>>> 726c1b5be6fdfe47c300692f37ff231c349e9d00
}