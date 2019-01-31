#include <stdio.h>
#include <stdlib.h>
int gdb(int a,int b);
int main()
{
    int m,n;
   scanf("%d %d",&m,&n);
   printf("%d",gdb(m,n));
}
int gdb(int a,int b)
{
  if(a==0)
    return b;
  else if(b==0)
    return a;
  else
    return gdb(b,a%b);
}