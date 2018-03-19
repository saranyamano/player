#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[10];
int i,j,m,n,f=0;
printf("Enter two strings:");
scanf("%s,%s",&a,&b);
m=strlen(a);
n=strlen(b);
for(i=0;i<m;i++)
{
for(j=0;j<n;i++)
{
if(a[i]==b[i])
{
f=1;
}
}
}
if(f==0)
{
printf("Strings are isomorphic");
}
else
{
printf("Strings are not isomorphic");
}
}
