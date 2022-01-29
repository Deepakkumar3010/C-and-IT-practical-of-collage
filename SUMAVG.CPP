#include<stdio.h>
#include<conio.h>

void main()
{
float a[100],sum=0,avg;
int i,n;

printf("Enter n numbers : ");
scanf("%d",&n);

printf("Enter numbers: \n");
for(i=0; i<n; i++)
{
printf(" a[%d] = ", i);
scanf("%f",&a[i]);
}
for(i = 0;i<n;i++)
{
sum = sum + a[i];
}
avg = sum/n;
printf("Sum is = %f\n",sum);
printf("Average is =  %f", avg);
getch();
}
