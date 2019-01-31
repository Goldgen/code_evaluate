#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,x,k=1,max;
  scanf("%d\n",&n);
  int data[n];
  int ne[n-1];
  for(int i=0;i<n;++i)
  {
    scanf("%d",&x);
    data[i]=x;
  }
  for(int i=0;i<n;++i)
  {
     if (data[i]==data[i+1]) ++k;
     else k=1;
     ne[i]=k;
  }
  max=ne[0];
  for(int i=1;i<n-1;++i)
  {
      if (ne[i]>max) max=ne[i];
  }
  printf("%d",max);
 return 0;
}

