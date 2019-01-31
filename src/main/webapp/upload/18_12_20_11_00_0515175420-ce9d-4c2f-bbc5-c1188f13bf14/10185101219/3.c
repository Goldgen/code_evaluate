#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Min(int arr[], int i)
{

        if(arr[i]<arr[0])
        {
            arr[0]=arr[i];
        }
    if(i!=0)
    {
        Min(arr,i-1);
    }
if(i==0)
return arr[0];
}
int Sum(int arr[], int n2)
{
		    if(n2==0)
                return arr[0];
            else
			return (arr[n2]+Sum(arr,n2-1));
}
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    int x[n];
    for(int i=0;i<n;++i)
        scanf("%d",&x[i]);
        int* ptr=x;
    printf("%d ",Min(ptr,n-1));
    printf("%d",Sum(ptr,n-1));
    return 0;
}
