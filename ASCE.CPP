#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int i,n,j,a;
int s[10000];

printf("Enter Nubmer of student : ");
scanf("%d",&n);

for (i =1; i <=n; i++)
{
printf("Enter student number : ");
scanf("%d",&s[i]);
}

for ( i=1; i<=n; i++)
{
for( j = i+1; j<=n; j++)
{
if(s[i]>s[j])
{
a = s[i];
s[i] = s[j];
s[j] = a;
}}}
printf("\nIn ascending order student number : \n");
for(i=1; i<=n;i++)
{
printf("%d\n",s[i]);
}
getch();
}
