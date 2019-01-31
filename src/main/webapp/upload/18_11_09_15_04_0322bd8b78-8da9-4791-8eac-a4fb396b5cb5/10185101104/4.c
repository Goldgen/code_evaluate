#include <stdio.h>

int main()
{
    int result=1;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result*=i;
        result=result%20181111;
    }
    printf("%d",result);
    return 0;
}
