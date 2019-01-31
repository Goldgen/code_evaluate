#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float x;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&e)==5)
    {
        x=1.0*(a+b+c+d+e)/5;
        printf("%.1f",x);
    }
    return 0;
}