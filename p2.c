#include<stdio.h>
#include<conio.h>
void main()
{
int p,i,fact=1;
scanf("%d",&p);
for(i=1;i<=p;i++)
{
fact=fact*i;
}
printf("%d",fact);
}
