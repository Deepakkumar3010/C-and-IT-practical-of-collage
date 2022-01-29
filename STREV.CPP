#include<stdio.h>
#include<conio.h>

char* reverse(char* str);

void main(){
int i,j,k;

char str[100];
char *rev;
printf("Enter the string:");
gets(str);
printf("The original string is:%s",str);
rev = reverse(str);
printf("\nThe reversed string is : ");
puts(rev);
getch();
}
char* reverse(char *str){
static int i = 0;
static char rev[100];

if(*str)
{
reverse(str+1);
rev[i++] = *str;
}
return rev;
}