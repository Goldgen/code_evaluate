#include <stdio.h>

int main(void)
{
    int n = 0 ;
    int i = 0 ;
    scanf("%d",&n);
    int arr[n];
    int length = 1;         //平台
    int MaxLength = 1;      //最大平台长度

    for (i = 0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i = 0;i<=n-2;i++)
    {
        if( arr[i] == arr[i+1] )
        {
            length = length + 1;
            if (MaxLength<length)
            {
                MaxLength = length;
            }

        }
        else
        {
            length = 1;
        }
    }
    printf("%d",MaxLength);
}
