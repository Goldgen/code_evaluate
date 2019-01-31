#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    int length;
    int leng_max = 1;
    scanf("%d",&n);
    int arr[n];
    for(i = 0;i <= n-1;i++)
        scanf("%d",&arr[i]);
    for(i = 0,j = 1;i <= n-2;i++)
    {
        if(arr[i] == arr[i+1])
        {
            if(n == 2)
                leng_max = 2;
            else if(i < n-2)
                j++;
            else
            {
                j++;
                if(j > leng_max)
                    leng_max = j;
            }
        }
        else
        {
            length= j;
            if(length > leng_max)
                leng_max = length;
            j = 1;
        }
    }
    printf("%d",leng_max);
    return 0;
}
