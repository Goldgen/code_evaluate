#include <stdio.h>
int Min (int arr[ ], int n)
{   int i,x=arr[0];
     for(i=1;i<n;++i)
     {
         if(arr[i]<x) x=arr[i];
     }
     return x;
}
int Sum (int arr [ ], int n)
{
    static int i=0,s=0;
    if (i==n) return s;
    else {s=s+arr[i];++i;
      Sum(arr,n);}
}
int main() {
  int a,min,sum;
  scanf("%d",&a);
  int s[100];
  for(int i=0;i<a;++i)
  {
      scanf("%d",&s[i]);
  }
  min=Min(s,a);
  sum=Sum(s,a);
  printf("%d %d\n",min,sum);
  return 0;
}
