#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  int i;
  unsigned long long int sum=1;

  scanf("%d",&n);
  if(n<=66)
  {
      for(i=1;i<=n;i++)
    sum=sum*i;
   printf("%u",sum%20181111);
  }

  else
  {
      sum=7225618;
  for(i=66;i<=n;i++)
    sum*=i;
  printf("%u",sum%20181111);

  }

    return 0;
}
