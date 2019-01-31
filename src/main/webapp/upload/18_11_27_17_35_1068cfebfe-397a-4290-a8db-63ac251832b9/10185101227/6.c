#include <stdio.h>
#include <stdlib.h>
int main()
{  int x,m,y,k=0;
   scanf("%d\n",&m);
   int a [m];
   int b [m-1];
   for(int i=0;i<m;++i)
   {
       scanf("%d",&x);
       a[i]=x;
   }
   scanf("\n");
   scanf("%d",&y);
   for(int i=0;i<m;++i)
   {
       if (y==a[i])
       { ++k;
           for (int l=0;l<m-1;++l)
           {
               if (l<i) b[l]=a[l];
               else b[l]=a[l+1]; }
	   break;}
      }
    if (k==0) printf("ERROR");
    else {
   for(int i=0;i<m-1;++i)
   {
       if (i==0) printf("%d",b[0]);
       else printf(" %d",b[i]);
   }}
   return 0;
}
