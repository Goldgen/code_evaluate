#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int MAX=20181111;
int main()
{
    int n,i,sum=1;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
        sum=sum*i%MAX;
    printf("%d",sum);
    return 0;
}
