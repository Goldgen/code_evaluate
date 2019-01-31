#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,x,a,h=0;
  scanf("%d\n",&n);
  int data[n];
  for(int i=0;i<n;++i)
  {
    scanf("%d",&x);
    data[i]=x;
  }
  scanf("\n");
  scanf("%d",&a);
  for (int i=0;i<n;++i)
  {
      if (data[i]==a) ++h;
      if (data[i]==a&&h==1) printf("%d",i);
      else if (data[i]==a&&h!=1) printf(" %d",i);
}
if (h==0) printf("ERROR");
   return 0;
}

