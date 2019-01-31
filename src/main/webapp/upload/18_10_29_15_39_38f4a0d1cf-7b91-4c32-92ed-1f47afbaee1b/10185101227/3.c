#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    int n,a,b,c,d,m,s;
    scanf("%d",&n);
    printf("%d",n);
    for (a=3;a<=n/2;a+=2)
    { m=0;s=0;
      b=n-a;
      for (c=2;c<a;c++)
      {if (a%c==0) ++m;}
     for (d=2;d<b;d++)
      {if (b%d==0) ++s;}
     if (m==0&&s==0)
        printf("=%d+%d",a,b);}
    return 0;
}
