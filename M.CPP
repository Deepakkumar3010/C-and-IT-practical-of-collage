#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, c;

printf("Enter first no : ");
scanf("%d",&a);
printf("Enter second no : ");
scanf("%d",&b);
printf("Enter third no : ");
scanf("%d",&c);

if( a > b && a > c)
{
printf("maximum no is = %d",a);
}
if (b > a && b > c)
{
printf("maximum no is = %d",b);
}
if( c>a && c > b)
{
printf("maximum no is = %d",c);
}
if (a == b && a == c && c == b )
{
printf("All numbers are same");
}
getch();
}