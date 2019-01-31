#include <stdio.h>
#include <stdlib.h>
int fun(int a);
int main()
{
   int b;
   scanf("%d",&b);
    printf("%d",fun(b));
}
int fun(int a)
{
  if(a==0||a==1)
    return a;
  else
    return fun(a-1)+fun(a-2);
}
