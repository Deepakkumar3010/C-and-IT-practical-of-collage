#include<stdio.h>
#include<conio.h>

void main()
{
char str[200];
int i,aph=0,vowels=0,consonants=0,digits=0,spaces=0,specialcharacters=0;

printf("Enter a string:");
gets(str);

for(i=0;str[i]!='\0';i++)
{
if((str[i]>='a'&&str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
{
aph++;
}
if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
{
vowels++;
}
else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
{
consonants++;
}
else if(str[i]>='0' && str[i]<='9')
{
digits++;
}
else if(str[i]==' ')
{
spaces++;
}
else
{
specialcharacters++;
}
}
printf("Alphabets = %d\n",aph);
printf("Vowels = %d\n",vowels);
printf("Consonants = %d\n",consonants);
printf("Digits = %d\n",digits);
printf("Words = %d\n",spaces+1);
printf("Special Characters = %d\n",specialcharacters);
getch();
}