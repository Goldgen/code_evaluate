

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    unsigned int n,m,x,y,a,b;
    int j,i;
    scanf("%u %u",&n,&m);
    a=x=y=n;
    for(j=0;n>0;j++)
        n/=10;
    if(m>j)
        m=m%j;
    for(i=1;i<=m;i++)
       {
        x/=10;
        y/=10;
       }
    for(i=1;i<=m;i++)
        x*=10;
        b=a-x;
    for(i=1;i<=j-m;i++)
        b*=10;

    printf("%d %u",j,b+y);
  return 0;
}

































































