#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n=0;
  unsigned long long sum=1;
  int i;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    sum=sum*i;
    double j=sum%20181111;
    printf("%.0lf",j);
}
