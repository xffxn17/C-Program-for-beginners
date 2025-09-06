// call by reference:
#include <stdio.h>
void triangle(float *, float *);

void triangle(float *b1, float *h1) // b1=&b *b1=val of b h1=&h *h1=val of h
{
    float a1 = 0.5 * (*b1) * (*h1);
    printf("area=%.2f\n", a1);
}

void main()
{
    float b, h;
    printf("enter base and height\n");
    scanf("%f%f", &b, &h);
    triangle(&b, &h);
}