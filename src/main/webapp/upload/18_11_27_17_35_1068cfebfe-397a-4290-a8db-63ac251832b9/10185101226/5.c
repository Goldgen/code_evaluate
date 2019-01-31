#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,x;
    int pos;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&pos,&x);
    for(i=0;i<pos;++i)
        printf("%d ",arr[i]);
    printf("%d ",x);
    for(i=pos;i<n;++i)
        printf("%d ",arr[i]);
    return 0;
}