#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int a[], int n)
{
    int i,j,temp;
    for(j=0;j<n-1;++j)
        for(i=0;i<n-1-j;++i)
        {
            if(a[i]>a[i + 1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;++i)
        scanf("%d",&arr[i]);
    bubble_sort(arr,n);
    for (int i=0;i<n;i++)
    {
        if(i==n-1)
            printf("%d", arr[i]);
        else
            printf("%d ", arr[i]);
    }
    return 0;
}