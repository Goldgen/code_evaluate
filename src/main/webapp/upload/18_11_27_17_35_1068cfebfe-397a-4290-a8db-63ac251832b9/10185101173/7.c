#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,m=0,j=0;
    scanf("%d",&n);
    int arr[n],b[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n;++i)
    {
        if(arr[i]==m)
        {
            b[j]=i;
            ++j;
        }
    }
    for(int i=0;i<j;++i)
        {
            if(i==j-1)
                printf("%d",b[i]);
            else
                printf("%d ",b[i]);
        }
    if(j==0)
        printf("ERROR");
    return 0;
}

