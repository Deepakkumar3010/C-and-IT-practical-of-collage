#include<stdio.h>
#include<conio.h>

void callbyreferenceswap(int *x, int *y)
{
int temp;

temp = *x;
*x = *y;
*y =  temp;
return;
}
void callbyvalueswap(int m,int n)
{
int t;

t = m;
m = n;
n = t;
return;
}
void main()
{
clrscr();

int a,b;

printf("Enter value of a : ");
scanf("%d",&a);
printf("Enter value of b : ");
scanf("%d",&b);

printf("\nIn Call by reference :\n");
printf("Before swap :  a = %d and b = %d\n",a,b);
callbyreferenceswap(&a,&b);
printf("After swap : a = %d and b = %d\n",a,b);

printf("\nIN  Call by value :\n");
printf("Before swap : a = %d and b = %d\n",a,b);
callbyvalueswap(a,b);
printf("After swap : a = %d and b = %d\n",a,b);
getch();
}