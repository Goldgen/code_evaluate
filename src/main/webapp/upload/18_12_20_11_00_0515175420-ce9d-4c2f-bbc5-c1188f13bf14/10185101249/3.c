#include <stdio.h>
#include <string.h>
int Min (int arr[ ], int n)
{
   static int m=2147483647;
   if(arr[n-1]<m)
      m=arr[n-1];
   if(n==0)
    return m;
   return Min(arr,--n);
}
int Sum (int arr[ ], int n)
{
    if(n>1)
       return Sum(arr,n-1)+arr[n-1];
    return arr[0];
}
int main()
{
    int n,i=0;
    int arr[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    printf("%d ",Min(arr,n));
    printf("%d",Sum(arr,n));
}
