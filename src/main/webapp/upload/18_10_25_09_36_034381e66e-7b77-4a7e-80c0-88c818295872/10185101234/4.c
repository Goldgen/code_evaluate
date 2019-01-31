#include<stdio.h>
int main()
{
    int n=0;
    int u=1;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        printf("*");

    while(u<=(n-2))
    {
      printf("\n*");
      for(int i=1;i<=(n-2);++i)
        printf(" ");
      printf("*");
      u++;
    }

    printf("\n*");
    for(int i=1;i<=(n-1);++i)
        printf("*");
    return 0;
}














