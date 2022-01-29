#include<stdio.h>
#include<conio.h>

struct marks
{
int hindi,english,maths;
};
struct student
{
int roll;
int total;

char name[20];
marks s;
};
void main()
{
clrscr();

int n,i;
struct student a[1000];

printf("Enter the numbers of student : ");
scanf("%d",&n);
for(i=1; i<=n;i++)
{
printf("\nEnter name of student %d:",i);
scanf("%s",a[i].name);
printf("Enter roll : ");
scanf("%d",&a[i].roll);
printf("Enter marks of hindi : ");
scanf("%d",&a[i].s.hindi);
printf("Enter marks of english : ");
scanf("%d",&a[i].s.english);
printf("Enter marks of maths : ");
scanf("%d",&a[i].s.maths);
}

for(i =1;i<=n;i++)
{
printf("\nName of student %d = %s\n",i,a[i].name);
printf("Roll = %d\n",a[i].roll);
printf("Marks of hindi = %d\n",a[i].s.hindi);
printf("Marks of english = %d\n",a[i].s.english);
printf("Marks of maths = %d\n",a[i].s.maths);

a[i].total = a[i].s.hindi+a[i].s.english+a[i].s.maths;

printf("Total marks = %d\n",a[i].total);
}
getch();
}
