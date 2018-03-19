#include<stdio.h>
void main()
{
char s[10];
int i,f=0;
printf("ENTER THE STRING:");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if((s[i]>=0)&&(s[i]<=9))
{
f=1;
}
}
if(f==0)
{
  printf("Yes");
}
else
{
printf("No");
}
}
