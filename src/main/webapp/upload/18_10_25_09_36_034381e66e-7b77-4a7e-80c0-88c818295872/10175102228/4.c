#include<stdio.h>
#include<stdlib.h>
int main()
{  int n;
 scanf("%d",&n);
 int i,j;
 for(i=0;i<n;i++)
  printf("*");
  printf("\n");
  for(i=1;i<n-1;i++)
  {   printf("*");
      for(j=1;j<n-1;j++)
      printf(" ");
      printf("*\n");

  }
 for(i=0;i<n;i++)
  printf("*");
 return 0;

}
