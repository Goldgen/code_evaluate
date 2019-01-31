#include<stdio.h>
int result(int z)
{
    int x,y;
    int sum=0;
    while(z>0)
    {
        x=z/10;
        y=z-10*x;
        sum+=y;
        z=x;
    }
    return sum;
}
int main()
{
    int n,a;
    scanf("%d",&n);
    a=result(n);
    printf("%d",a);
    return 0;
}
