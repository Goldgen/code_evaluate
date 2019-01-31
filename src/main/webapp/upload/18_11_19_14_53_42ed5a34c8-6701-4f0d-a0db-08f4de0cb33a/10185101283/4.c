#include<stdio.h>
void f(int a)
{
    int b;
    b=a%2;
    if(a>=2)
        f(a/2);
    printf("%d",b);
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
    f(n);
    return 0;
}
