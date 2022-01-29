#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
clrscr();

char str[20];
int i,len, temp = 0;

printf("Enter a string :");
scanf("%s",str);

len = strlen(str);
for(i = 0; i<len ; i++)
{
if (str[i] != str[len-i-1])
{
temp = 1;
break;
}
}
if (temp ==0)
{
printf("String is palindromme");
}
else{
printf("String is not a palindrome");
}
getch();
}
