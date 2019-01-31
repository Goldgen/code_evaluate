#include<stdio.h>
 #include<stdlib.h>
 int main()
 { int n,i,j;
     scanf("%d",&n);
     for(i=0;i<(n-1)/2;i++)
     { printf(" ");

     }
     printf("*");
     printf("\n");
  for(i=3;i<=n-2;i=i+2)
  {  for(j=0;j<(n-i)/2;j++)
      printf(" ");
      printf("*");
      for(j=0;j<i-2;j++)
         printf(" ");
         printf("*");
         printf("\n");
  }
  for(i=0;i<n;i++)
  { printf("*");

  }
  return 0;
 }