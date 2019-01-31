#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,max;
    scanf("%d",&n);
    int arr[n];
    for(i = 0;i <= n-1; i++)
        scanf("%d",&arr[i]);
    for(i = 0;i <= n-2;i++)
    {
        for(j = 0;j <= n-2-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                max = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = max;

            }
        }
    }
    for(i = 0;i <= n-1;i++)
    {
        if(i == n-1)
            printf("%d",arr[i]);
        else
            printf("%d ",arr[i]);
    }
    return 0;
}
