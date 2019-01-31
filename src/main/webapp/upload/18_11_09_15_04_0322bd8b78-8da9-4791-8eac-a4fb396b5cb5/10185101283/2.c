#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    int i=1;
    int x=n;
    while(i<n)
    {
        int a=(x-1)*2;
        while(a>0)
        {
            printf(" ");
            --a;
        }
        printf("1");
        int b=1;
        while(b<i)
        {
            printf("+%d",b+1);
            ++b;
        }
        printf("=%d",i);
        int c=i;
        while(c>=2)
        {
            printf("+%d",c-1);
            --c;
        }
        printf("\n");
        ++i;
        --x;
    }
    printf("1");
    int c=2;
    while(c<=i)
    {
        printf("+%d",c);
        ++c;
    }
    printf("=%d",i);
    int d=i;
    while(d>1)
    {
        printf("+%d",d-1);
        --d;
    }
    return 0;
}