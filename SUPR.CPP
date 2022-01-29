#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char s[100];
int i;

printf("\nEnter a string : ");
gets(s);

for(i=0; s[i]!='\0'; i++)
{
if (s[i] >='a' && s[i]<='z')
{
s[i] = s[i]-32;
}}
printf("\n String in Upper Case = %s", s);
getch();
}
