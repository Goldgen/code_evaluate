#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
   int n,i,a,h=1;
   scanf("%d",&n);
   while (h<=n)
   { i=1;a=2*(n-h);
     while (a>0){printf(" "); --a;}
     while (i<=h)
        {if (i==1) printf("%d",i);
        else printf("+%d",i);
        ++i;}
     printf("=");
     --i;
     while (i>0)
     {if (i==1&&h!=n)  printf("1\n");
      else if (i==1&&h==n) printf("1");
     else printf("%d+",i);
     --i;}
     ++h;
   }
   return 0;
}
