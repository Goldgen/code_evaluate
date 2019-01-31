#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int insert,insert_ele;
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i <= n-1; i++)
        scanf("%d",&arr[i]);
    scanf("%d %d",&insert,&insert_ele);
    for(i = n; i >= 0; i--)
    {
        if(i > insert)
            arr[i] = arr[i - 1];
        else if(i == insert)
            arr[i] = insert_ele;
    }
    for(i = 0; i <= n; i++)
    {
        if(i < n)
            printf("%d ",arr[i]);
        else
            printf("%d",arr[i]);
    }
    return 0;
}
