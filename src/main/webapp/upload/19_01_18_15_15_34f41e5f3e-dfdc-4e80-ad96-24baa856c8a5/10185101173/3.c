#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    scanf("%d",&a);
    printf("%d",a);
    int b=2,c=a-2;
    int bp=2,cp=2;
    int n=1,m=1;
    for(int i=0;i<(a/2);++i)
      {bp=2;cp=2;
       if(b!=2)
        {for(int j=0;j<b-2;++j)
          {if(b%bp==0)
            n=0;
           ++bp;}}
       for(int k=0;k<c-2;++k)
        {if(c%cp==0)
           m=0;
         ++cp;}
       if(n==1&&m==1&&b<=c)
         printf("=%d+%d",b,c);
       ++b;--c;m=1;n=1;
       }
    return 0;
}