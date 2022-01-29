#include<stdio.h>
#include<conio.h>

void main()
{
int i,j, a[10][10],sum=0;

printf("Enter matrix elements:\n");
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
printf("a[%d] [%d]=",i,j);
scanf("%d",&a[i][j]);
}
}
printf("Matrix:\n");

for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}

for(i=0; i<4; i++)
{
for(j=0; j<4;j++)
{
if(i==j || i+j==4-1)
{
sum = sum + a[i][j];
}}}
printf("Sum = %d\n",sum);
getch();
}