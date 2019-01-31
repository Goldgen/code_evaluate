#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",n);
    for(int i=2;(i<=(n-i))&&(i<n);++i)
    {
        int a=2,b=2;
        for(;a<i;++a)
        {
            if(i%a==0)
                break;
        }
        for(;b<n-i;++b)
        {
            if((n-i)%b==0)
                break;
        }
        if(a==i&&b==(n-i))
            printf("=%d+%d",i,n-i);
    }
    return 0;
}
