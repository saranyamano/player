#include<stdio.h>
int main()
{
int ch;
printf("1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n7.Sunday\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 6:
printf("YES");
break;
case 7:
printf("YES");
break;
default:
printf("NO");
break;
}
return 0;
}
