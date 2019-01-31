#include <stdio.h>
#include <stdlib.h>

int sum(int x)
{
    int all=0;
    if(x==0)
        return all;
    else
        return all=x%10+sum(x/10);
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;

}
