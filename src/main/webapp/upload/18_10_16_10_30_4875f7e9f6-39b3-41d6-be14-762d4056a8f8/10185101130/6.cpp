#include<stdio.h>

int main(void)
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
      d=a;
    else
      d=b;
    if(d>c)
      printf("%d",d);
    else
      printf("%d",c);
    return 0;




}
