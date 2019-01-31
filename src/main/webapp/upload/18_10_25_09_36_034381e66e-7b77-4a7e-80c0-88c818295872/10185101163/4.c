#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=0;i<n;++i)
      printf("*");
    for(i=0;i<n-2;++i){
      printf("\n*");
      for(a=0;a<n-2;++a)
        printf(" ");
      printf("*");
    }
    printf("\n");
    for(i=0;i<n;++i)
        printf("*");
    return 0;
}
