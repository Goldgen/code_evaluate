#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;scanf("%d",&n);
   int a[n];int b[n];b[0]=0;int p=0;int m=0;
   for(int i=0;i<n;++i)
    scanf("%d",&a[i]);
   for(int i=0;i<n;++i)
   {
      if(a[i]!=a[i+1])
      {
          ++p;
          b[p]=i+1;
      }
   }
   for(int i=0;i<p;++i)
   {
       if(b[i+1]-b[i]>m)
       m=b[i+1]-b[i];
   }
   printf("%d",m);


}
