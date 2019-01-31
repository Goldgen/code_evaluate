#include<stdio.h>
int main()
{
    int n =0;
    scanf("%d",&n);
    int a = (n-1)/2;
    int b=(n-1)/2;
    for(int i=1;i<=b;++i)
    {
        for(int i = 1;i<=a;++i)
        {
            printf(" ");
        }
        printf("*");
        for(int x=b,p=2*(x-a)-1;p>0;--p)
        {
            printf(" ");
        }
        if(a<b)
          printf("*");
          printf("\n");
          --a;
    }
    for(int i = 1;i<=n;++i)
        printf("*");
    return 0;
}
