#include <stdio.h>

int sum(int a)
{
    if(a<10)
        return a;
    return a%10+sum(a/10);
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",sum(num));
    return 0;
}
