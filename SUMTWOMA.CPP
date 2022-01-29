#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int a[4][4],b[4][4],s[4][4],i,j;

printf("Enter Elements of first 4*4 Matrix: \n\n");

for(i =0; i<=3;i++)
{
for(j=0; j<=3; j++)
{
printf("a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);}
printf("\n");
 }

printf("Enter Elements of second 4*4 Matrix: \n\n");

for(i =0; i<=3;i++)
{
for(j=0; j<=3; j++)
{
printf("b[%d][%d]=",i,j);
scanf("%d",&b[i][j]);
}
printf("\n");
}


printf("First matrix :\n\n");

for(i=0; i<=3; i++)
{
for(j=0;j<=3;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}


printf("Second matrix :\n\n");
for(i=0; i<=3; i++)
{
for(j=0;j<=3;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}

for(i=0; i<=3;i++)
{
for(j=0; j<=3;j++)
{
s[i][j] = a[i][j]+b[i][j];
}}
printf("\nSum of Matrices :\n\n");

for(i=0; i<=3; i++)
{
for(j=0;j<=3;j++)
{
printf("%d ",s[i][j]);
}
printf("\n");
}
getch();
}







