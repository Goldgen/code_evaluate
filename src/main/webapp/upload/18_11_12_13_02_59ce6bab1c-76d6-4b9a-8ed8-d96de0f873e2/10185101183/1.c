#include <stdio.h>
#include <stdlib.h>

int mul(int a,int b)
{
    return a*b;
}
int main()
{
    int n;scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=i;j++)
      {
          printf(" %d * %d = %2d",j,i,mul(i,j));
      }
	  if(i!=n)
      printf("\n");
  }
}
