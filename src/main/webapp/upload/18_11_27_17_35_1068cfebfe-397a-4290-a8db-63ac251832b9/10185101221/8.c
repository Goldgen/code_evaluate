#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int n1=n-1;
    int data[n];
    int arr[n1];
    for(int i=0;i<n;i++)
        scanf("%d",&data[i]);
    int temp=0;
    int j=1;
    for(int i=0;i<n1;i++)
    {
        if(data[i]==data[i+1])
            j++;
        else
            j=1;
        arr[i]=j;
    }
    for(int a=0;a<n1;a++)
    {
        for(int b=0;b<n1-a-1;b++)
        {
            if(arr[b]>arr[b+1])
            {
                temp=arr[b];
                arr[b]=arr[b+1];
                arr[b+1]=temp;
            }
        }
    }
    printf("%d",arr[n1-1]);
    return 0;
}
