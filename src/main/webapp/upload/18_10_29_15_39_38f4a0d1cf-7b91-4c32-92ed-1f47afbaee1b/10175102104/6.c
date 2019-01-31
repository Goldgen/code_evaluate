#include<stdio.h>
#include<stdlib.h>

int GCD(int a,int b)
{
    return b==0?a:GCD(b,a%b);
}

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=GCD(a,b);
    printf("最大公约数是: %d",c);
    return 0;
}
