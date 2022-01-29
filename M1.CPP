#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();

int a , b , n ;

printf(" 1.Addition\n");
printf(" 2.Subtraction\n");
printf(" 3.Multiplication\n");
printf(" 4.Division\n");

printf(" Enter the first value : ");
scanf("%d",&a);
printf(" Enter the second value : ");
scanf("%d",&b);

printf(" Enter your choice : ");
scanf("%d",&n);
switch(n)
{
 case 1 :
     printf("Sum of two numbers is = %d ",a+b);
     break;
 case 2 :
      printf("Subtraction of two number is = %d ",a-b);
      break;
 case 3 :
      printf("Multiplication of two number is = %d ",a*b);
      break;
 case 4 :
      printf("Division of two numbers is = %d ",a/b);
      break;
 default :
    printf(" Enter your corect choice.");
    break;
 }
getch();
}