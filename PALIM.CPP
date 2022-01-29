#include<stdio.h>
#include<conio.h>

void main()
{
int n, t, s=0,k;

printf("Enter any number : ");
scanf("%d",&n);

t = n;

while(n>0)
{
k = n%10;
s = s*10+k;
n = n/10;
}

if(t == s)
printf("Palimdrom number.");
else
printf("Not palimdrome number.");
getch();
}
