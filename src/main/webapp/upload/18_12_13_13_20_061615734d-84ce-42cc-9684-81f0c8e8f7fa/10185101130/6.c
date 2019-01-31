#include <stdio.h>
#include <stdlib.h>

void rotate(int* p,int n,int m);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[100];
    int i =0;
    while(i <= a-1)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    rotate(arr,a,b);
    return 0;
}

void rotate(int* p,int n,int m)
{
    int a[20] = {0};
    for(int i = 0;i <= n-1;i++)
    {
        if(m+i <= n-1)
            a[i+m] = *(p+i);
        else
            a[i+m-n] = *(p+i);
    }
    for(int i = 0;i <= n-1;i++)
    {
        if(i == n-1)
            printf("%d",a[i]);
        else
            printf("%d ",a[i]);
    }
    return;
}
