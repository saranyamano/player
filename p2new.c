#include "stdio.h"
int main(void) {
  int a,i,fact=1;
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    fact=fact*i;
  }
  printf("FACTORIAL:%d",fact);
  return 0;
}
