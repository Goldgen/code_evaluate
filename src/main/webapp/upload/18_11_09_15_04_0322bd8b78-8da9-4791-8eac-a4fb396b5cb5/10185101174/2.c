#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  int i=1;
  int p;
  scanf("%d",&n);
  for(; i<=n; i++)
  {
      int j=0;
      for(; j<(n-i)*2; j++)
        printf(" ");
      printf("1");
      int k=2;
      for(; k<=i; k++)
        printf("+%d",k);
      printf("=");
      p=i;
      for(; p>=2; p--)
        printf("%d+",p);
      if(i==n)
        printf("1");
      else
        printf("1\n");
  }

}