#include <stdio.h>

int sum(int);

int main (void)
{
    int a = 0;
    scanf("%d",&a);
    printf("%d",sum(a));
}

int sum(int a)
{
    static int result = 0;
    if(a>0)
    {
        result += a % 10;
        a /= 10;
        return sum(a);
    }
    return result;
}
