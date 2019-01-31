#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i;
    scanf("%d %d",&n,&m);
    char num[81];
    scanf("%s",&num);
    i=n-m;
    for(i;num[i]!='\0';++i)
    {
        printf("%c ",num[i]);
    }
    i=0;
    for(i;i<(n-1-m);++i)
    {
        printf("%c ",num[i]);
    }
    printf("%c",num[n-m-1]);
    return 0;
}