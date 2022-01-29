#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{

char a[100],b[100];

printf("Enter first string : ");
gets(a);

printf("Enter second string : ");
gets(b);

if(strcmp(a,b)==0)
{
printf("Strings is equal.");
}
else
{
printf("Strings is not equal.");
}
getch();
}