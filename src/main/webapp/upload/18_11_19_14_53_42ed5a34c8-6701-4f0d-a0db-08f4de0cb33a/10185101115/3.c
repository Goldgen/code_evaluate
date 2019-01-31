#include<stdio.h>

void f();

void f()
{
        int num;
        scanf("%d",&num);
        if(num<=0)return;
        f();
        printf("%d ",num);
    }


int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)f(n);
    return !printf("%d\n",n);
}
