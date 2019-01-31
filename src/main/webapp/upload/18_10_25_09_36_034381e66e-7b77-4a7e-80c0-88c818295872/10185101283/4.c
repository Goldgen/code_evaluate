#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n-1;++i)
    {
        printf("*");
    }
      printf("*\n");
    for(int i=1;i<=n-2;++i)
    {
        printf("*");
        for(int i = 1;i<=n-2;++i)
             printf(" ");
        printf("*\n");
    }
    printf("*");
    for(int i=1;i<=n-1;++i)
        printf("*");

    return 0;
}
