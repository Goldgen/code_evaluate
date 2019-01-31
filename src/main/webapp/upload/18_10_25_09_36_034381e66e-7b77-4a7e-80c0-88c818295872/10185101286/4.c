#include<stdio.h>
int main()
{
   int n,i,j;
   scanf("%d",&n);
   for(i=1;i<=n;++i){
    printf("*");
   }
   for(j=2;j<=n-1;++j){
    printf("\n*");
    for(i=2;i<=n-1;++i){
        printf(" ");
    }
    printf("*");
   }
   printf("\n*");
   for(i=1;i<=n-1;++i){
    printf("*");
   }
    return 0;
}