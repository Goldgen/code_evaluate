#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int a[100];
  int n,i,min,plus;
  plus=0;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  min=a[0];
  for(i=0;i<n;i++)
  {
      if(min>=a[i])
      {
          min=a[i];
      }
  }
  for(i=0;i<n;i++)
  {
      plus=plus+a[i];
  }
  printf("%d %d",min,plus);
    return 0;
}
