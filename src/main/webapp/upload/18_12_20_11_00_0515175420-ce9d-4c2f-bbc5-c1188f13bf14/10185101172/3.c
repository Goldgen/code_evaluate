#include <stdio.h>
#include <string.h>

int Min (int arr[ ], int n);
int Sum (int arr [ ], int n);
int main()
{
    int n,i=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("%d ",Min(array,n));
    printf("%d",Sum(array,n));
    return 0;
}

int Min (int arr[ ], int n)
{
    int i=0,min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}

int Sum (int arr[ ], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}
