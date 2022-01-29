#include<stdio.h>
#include<conio.h>

void fab(int n);

void main()
{
int a = 0,b =1,n;

printf("Enter number = ");
scanf("%d",&n);
printf("\n%d\n%d\n",a,b);
fab(n);
getch();
}
void fab(int n)
{
static int c = 0, a=0,b=1;
if(n>1)
{
c = a+b;
a=b;
b=c;
printf("%d\n",c);
fab(n-1);
}
else
{
printf("\n");
}}