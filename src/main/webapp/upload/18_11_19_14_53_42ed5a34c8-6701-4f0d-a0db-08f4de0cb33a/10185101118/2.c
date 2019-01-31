#include<stdio.h>
int pause(int);
int main()
{
    int n,c;
    scanf("%d",&n);
    c=pause(n);
    printf("%d",c);
    return 0;
}
int pause(int n)
{
    int a;
    if(0==n)return 0;
    else
    {
        a=n%10;
        n/=10;
        return a+pause(n);
    }
}