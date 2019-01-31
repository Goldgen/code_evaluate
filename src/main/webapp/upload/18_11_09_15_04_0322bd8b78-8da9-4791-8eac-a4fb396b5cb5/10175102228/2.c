#include<stdio.h>
#include<stdlib.h>
int main()
{   int n;
  scanf("%d",&n);
  int i;
  for(i=0;i<n;i++)
  {  int x=(n-i-1)*2,j;
   for(j=0;j<x;j++)
      printf(" ");
    printf("1");
    for(j=2;j<=i+1;j++)
    { printf("+%d",j);
    }
    printf("=");
    printf("%d",i+1);
    for(j=i;j>0;j--)
    { printf("+%d",j);

    }
    if(i!=n-1)printf("\n");
    }
     return 0;

}