#include <stdio.h>
#include <stdlib.h>

int sum(int n);
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",sum(num));
    return 0;
}
int sum(int n)
{
    int s;
    if(n >= 0)
    {
        if(n == 0)
            return 0;
        s = sum(n / 10) + n % 10;
    }
    return s;
}
