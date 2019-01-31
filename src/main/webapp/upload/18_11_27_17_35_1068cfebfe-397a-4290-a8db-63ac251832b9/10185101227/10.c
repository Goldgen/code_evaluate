#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,x,a;
  scanf("%d\n",&n);
  int data[n];
  for(int i=0;i<n;++i)
  {
    scanf("%d",&x);
    data[i]=x;
  }
  for(int i=0;i<n;++i)
  {
      for(int j=i+1;j<n;++j)
      {
          if (data[i]>=data[j])
          {
              a=data[i];
              data[i]=data[j];
              data[j]=a;
          }
      }
  }
  for (int i=0;i<n;++i)
  {
      if (i==0) printf("%d",data[0]);
      else printf(" %d",data[i]);
  }
   return 0;
}

