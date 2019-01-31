#include <stdio.h>
#include <stdlib.h>
int main()
{  int x,m,g,h;
   scanf("%d\n",&m);
   int a [m];
   int b [m+1];
   for(int i=0;i<m;++i)
   {
       scanf("%d",&x);
       a[i]=x;
   }
   scanf("\n");
   scanf("%d %d",&g,&h);
   for(int i=0;i<m+1;++i)
   {
       if(i==g) b[i]=h;
       else if (i<g) b[i]=a[i];
       else b[i]=a[i-1];
   }
   for(int i=0;i<m+1;++i)
   {
       if (i==0) printf("%d",b[0]);
       else printf(" %d",b[i]);
   }
   return 0;
}
