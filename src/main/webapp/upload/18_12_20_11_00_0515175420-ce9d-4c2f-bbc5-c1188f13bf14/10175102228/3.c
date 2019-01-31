#include<stdio.h>
#include<stdlib.h>
 int Min(int arr[],int n)
 {  int min=arr[0];
   int i;
   for(i=1;i<n;i++)
    { if(arr[i]<min)min=arr[i];
   }
   return min;
 }
 int Sum(int arr[],int n)
 { if(n==1)return arr[0];
     return Sum(arr,n-1)+arr[n-1];
 }
 int main()
 { int n,i;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  { scanf("%d",&a[i]);
  }
  printf("%d %d",Min(a,n),Sum(a,n));
  return 0;

 }
