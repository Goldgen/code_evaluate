#include<stdio.h>

int main ()
{
   int i,n,j=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    {for(j=1;j<=n-i;j++)
        printf(" ");
      for(j=1;j<=2*i-1;j++)
            printf("%c",'A'+i-1);
      printf("\n");}
    for(i=1;i<n-1;i++)
        {for(j=1;j<=i;j++)
        printf(" ");
        for(j=1;j<=2*(n-i)-1;j++)
            printf("%c",'A'+n-1+i);
        printf("\n");
        }
     for(i=1;i<=n-1;i++)
        printf(" ");
     printf("%c",'A'+2*(n-1));
    return 0;}
