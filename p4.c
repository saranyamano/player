#include "stdio.h"
int main(void) {
  char a[10];
  int i;
  scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]!='\0')
    {
    printf("%c",a[i]);
    }
  }
  printf(".");
  return 0;
}
