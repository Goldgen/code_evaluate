#include <stdio.h>
int Min (int arr[], int n)
{
   int min=arr[0],i;
   for(i=0;i<n-1;i++)
        if (min>arr[i+1])
        min=arr[i+1];
   printf("%d ",min);
}
int Sum (int arr [ ], int n)
{
 int sum=0,i;
 for(i=0;i<n;i++)
    sum+=arr[i];
 printf("%d",sum);
}
int main()
{
int arr[100],n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
Min(arr,n);
Sum(arr,n);
return 0;
}