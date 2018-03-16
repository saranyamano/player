#include<stdio.h>
void main()
{
int a,b,c,t;
scanf("%d,%d,%d",&a,&b,&c);
t=(a^b)%c;
printf("%d",t);
}
