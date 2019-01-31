#include <stdio.h>
int db(int n)
{
    if(n==0)
    return 0;
    db(n/2);
    printf("%d",n%2);
}
int main()
{
    int n;
    scanf("%d",&n);
    db(n);
}