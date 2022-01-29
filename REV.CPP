#include<stdio.h>
#include<conio.h>

void main()
{
int n, k,s=0;
printf("Enter a number : ");
scanf("%d",&n);

while(n>0)
{
k = n%10;
s = s*10+k;
n = n/10;
}
printf("Reversed =  %d",s);
getch();
}