#include<stdio.h>
int main()
{
    int n;
    int a=65;
    scanf("%d",&n);
    for(int i=1;i<=n-1;++i,++a)
    {
        for(int b=i;b<=n-1;++b)
            printf(" ");
        for(int c=1;c<=2*i-1;++c)
            printf("%c",a);
        printf("\n");
    }
    for(int d=1;d<=2*n-1;++d)
        printf("%c",a);
    ++a;
    for(int i=1;i<=n-1;++i,++a)
    {
        printf("\n");
        for(int e=i;e>0;--e)
            printf(" ");
        for(int f=2*(n-i)-1;f>0;--f)
            printf("%c",a);
    }
    return 0;
}
