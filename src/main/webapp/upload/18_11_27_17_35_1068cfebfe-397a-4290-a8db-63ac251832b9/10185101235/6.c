#include<stdio.h>

int main(void)
{
    int i = 0;
    int n = 0;
    scanf("%d",&n);
    int arr[n];
    int deleteNum = 0;
    int checker = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&deleteNum);

    for(i=0;i<n;i++)
    {
        if(arr[i]==deleteNum)
        {
            checker = 1;
            for(;i<n-1;i++)
            {
                arr[i]=arr[i+1];
            }
        }
    }
    if(checker == 0)
    {
        printf("ERROR");
        return 0;
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d",arr[i]);
        if(i!=n-2)
            printf(" ");
    }
}

