#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[1000]={};
  scanf("%d",&a[0]);
  int i;
  for(i=0;a[i]>0;++i )
    scanf("%d",&a[i+1]);
  for(int j=i-1;j>=0;j--)
  {
      if(j!=0)
    printf("%d ",a[j]);
    else
        printf("%d",a[j]);
  }

}
