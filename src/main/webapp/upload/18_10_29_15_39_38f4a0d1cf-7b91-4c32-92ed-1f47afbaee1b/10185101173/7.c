#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=1,c=0,d=0,e=0;
    scanf("%d",&a);
    c=a/b;
    while((c)!=0)
    {b=2*b;
     c=a/b;
     ++d;}
    for(int i=0;i<d;++i)
    {if((a&1)==1)
       ++e;
     a=(a>>1);}
     printf("%d",e);
     return 0;
}
