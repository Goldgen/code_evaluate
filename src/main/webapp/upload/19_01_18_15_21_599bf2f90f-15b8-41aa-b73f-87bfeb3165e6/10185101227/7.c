#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    int a,b,c,d,e,f;
    scanf ("%d%d%d%d",&a,&b,&c,&d);
    if (a>b)
      e=a;
    else
      e=b;
    if(c>d)
      f=c;
    else
      f=d;
    if (e>f)
       printf ("%d",e);
    else
       printf ("%d",f);
    return 0;

}
