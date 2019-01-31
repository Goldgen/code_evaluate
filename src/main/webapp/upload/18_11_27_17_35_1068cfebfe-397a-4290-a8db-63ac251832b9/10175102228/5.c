#include<stdio.h>
#include<stdlib.h>
#define N 1000
int main()
{ int n,a[N];
  scanf("%d",&n);
  int i;
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  int locate,x;
  scanf("%d%d",&locate,&x);
   for(i=0;i<n;i++)
   { if(i==locate)printf("%d ",x);
      if(i<n-1)printf("%d ",a[i]);
        else printf("%d",a[i]);   
   }
 if(locate==n)printf(" %d",x);
    return 0;

}