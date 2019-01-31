#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,m=0,j=0;
    scanf("%d",&n);
    int arr[n],a[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    a[0]=-1;
    for(int i=0;i<n;++i)
    {
        if(arr[i]==m)
        {
            a[j]=i;
            ++j;
        }
    }
    j=0;
    if(a[0]!=-1)
    {
        for(int i=0;i<n;++i)
        {
            if((i==0)&&(i!=a[j]))
                printf("%d",arr[i]);
            else if(i==a[j])
                ++j;
            else
                printf(" %d",arr[i]);
        }
    }
    else
        printf("ERROR");
    return 0;
}
