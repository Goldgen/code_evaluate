#include<stdio.h>
int main()
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    {
        for(int i=1;i<=a&&i<=b;++i)
            if(a%i==0&&b%i==0)
            max=i;
    }
    printf("最大公约数是: %d",max);
    return 0;
}