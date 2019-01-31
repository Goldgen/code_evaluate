#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    int a,b,c,d;
    scanf ("%d%d%d",&a,&b,&c);
    if (a>b)
     d=a;
    else
     d=b;
    if(d>c)
      d=d;
    else
      d=c;
    printf ("%d",d);
    return 0;

}
