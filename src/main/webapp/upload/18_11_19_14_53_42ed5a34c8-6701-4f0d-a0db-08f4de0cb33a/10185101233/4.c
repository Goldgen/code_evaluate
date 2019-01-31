#include <stdio.h>
int result(int x)
{
    if(x==0)
    return 0;
    result(x/2);
    printf("%d",x%2);
}
int main()
{
    int n;
    scanf("%d",&n);
    result(n);
}