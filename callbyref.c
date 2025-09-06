// call by reference:
#include <stdio.h>
void rectangle(int *, int *);
void rectangle(int *l1, int *b1) // l1=&l *l1=value of l b1=&b *b1=val of b
{
	int a1 = (*l1) * (*b1);
	printf("area=%d\n", a1);
}
void main()
{
	int l, b;
	printf("enter l and b values\n");
	scanf("%d%d", &l, &b);
	rectangle(&l, &b);
}