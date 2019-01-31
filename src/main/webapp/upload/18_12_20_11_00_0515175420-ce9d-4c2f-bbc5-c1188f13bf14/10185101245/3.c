#include <stdio.h>
#include <stdlib.h>
int Min (int arr[ ], int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}
int Sum (int arr [ ], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}

int main()
{
   int n;
    scanf("%d",&n);
   int array[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
   }
   printf("%d %d",Min(array,n),Sum(array,n));
    return 0;
}