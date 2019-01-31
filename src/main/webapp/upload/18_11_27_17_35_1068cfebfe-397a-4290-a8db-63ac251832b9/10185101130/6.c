#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,n,i,j=-1;
    scanf("%d",&n);
    int arr[n];
    for(i = 0;i <= n-1;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&s);
    for(i = 0;i <= n-1; i++)
    {
        if(arr[i] == s)
        {
            for(j = i; j <= n-2;j++)
                arr[j] = arr[j+1];
            break;
        }
    }
    if(j == -1)
        printf("ERROR");
    else
    {
        for(i = 0; i <= n-2; i++)
        {
            if(i == n-2)
                printf("%d",arr[i]);
            else
                printf("%d ",arr[i]);
        }
    }

    return 0;
}
