#include<stdio.h>
#include<conio.h>

long int factorial(int n);

void main()
{
clrscr();

int n;
printf("Enter a positive integer : ");
scanf("%d",&n);

printf("Factorial of number %d is : %ld",n,factorial(n));
getch();
}
long int factorial(int x)
{
if(x>=1)
return (x*factorial(x-1));
else
return 1;
}