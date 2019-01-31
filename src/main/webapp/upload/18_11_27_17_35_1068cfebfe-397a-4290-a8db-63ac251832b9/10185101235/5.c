#include<stdio.h>

int main(void)
{
    int i = 0;
    int n = 0;
    scanf("%d",&n);
    int arr[n+1];
    int inputPlace = 0;
    int inputNum = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&inputPlace,&inputNum);

    for(i=n;i>=inputPlace+1;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[inputPlace] = inputNum;
    for(i=0;i<=n;i++)
    {
        printf("%d",arr[i]);
        if(i!=n)
            printf(" ");
    }
}
