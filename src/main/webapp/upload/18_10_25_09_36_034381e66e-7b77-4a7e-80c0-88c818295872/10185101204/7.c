#include <stdio.h>


int main()
{
      int n=0,i=1,j=0,p=1,q=1,m=1;
      scanf("%d",&n);
      for(i=1;i<=n/2;++i)
                printf(" ");
      printf("*");
      for(j=0;j<n/2-1;++j)
      {printf("\n");
          for(p=1;p<n/2-j;++p)
            printf(" ");
          printf("*");
          for(q=1;q<=2*j+1;++q)
            printf(" ");
          printf("*");}
          printf("\n");
      for(m=1;m<=n;++m)
        printf("*");
}