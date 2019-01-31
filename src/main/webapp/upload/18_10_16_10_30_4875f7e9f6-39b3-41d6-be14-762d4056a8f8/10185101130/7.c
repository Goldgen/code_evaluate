#include<stdio.h>

int main(void)
{
    int a,b,c,d,e;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b)
      e=a;
    else
      e=b;
    if(e>c)
      e=e;
    else
      e=c;
    if(e>d)
      printf("%d",e);
    else
      printf("%d",d);

    return 0;




}
