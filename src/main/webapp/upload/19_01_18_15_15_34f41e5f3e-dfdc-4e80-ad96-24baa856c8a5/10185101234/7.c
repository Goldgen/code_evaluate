#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a,m,n,i;
  scanf("%d",&a);
  n=0;
  i=0;
  while(a>0)
{
    m=a%2;
    a=a/2;
    if(m!=0)
    i++;
}
   printf("%d",i);
   return 0;
}