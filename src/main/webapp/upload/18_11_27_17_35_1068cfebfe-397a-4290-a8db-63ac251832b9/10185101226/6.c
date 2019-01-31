#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,b,j;
    int la=0;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<=(n-1);++i)
    {
        scanf("%d",&num[i]);
    }
    scanf("%d",&b);
    if(b==num[0])
    {
        la=1;
        for(j=1;j<=(n-1);++j)
            printf("%d ",num[j]);
    }
    for(i=1;i<=(n-1);++i)
    {
        if(num[i]==b)
        {
            la=1;
            for(j=0;j<i;++j)
                printf("%d ",num[j]);
            for(j=i+1;j<=(n-1);++j)
                printf("%d ",num[j]);
        }
    }
    if(la==0)
        printf("ERROR");
    return 0;
}