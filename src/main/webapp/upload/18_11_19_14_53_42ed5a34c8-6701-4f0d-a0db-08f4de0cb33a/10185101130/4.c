#include<stdio.h>

int change(int);

int main(void)
{
    int a = 0;
    scanf("%d",&a);
    change(a);
    return 0;
}

int change(int n)
{
    if(n > 0)
    {
        change(n/2);
        printf("%d",n%2);
    }
}
