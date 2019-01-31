#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    while(a!=b)
    {
        if(a>b)a-=b;
        if(a<b)b-=a;
    }
    printf("最大公约数是: %d",a);
    return 0;
}
