#include<stdio.h>
#include<stdlib.h>
# define M 20181111
int main()
{  int n;
  scanf("%d",&n);
  int i,fc=1;
  for(i=1;i<=n;i++)
  { fc=(fc*i)%M;

  }
  printf("%d",fc);
   return 0;
}