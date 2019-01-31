#include <stdio.h>
#include <stdlib.h>


int Min (int arr[ ], int n);
int Sum (int arr [ ], int n);
int main()
{
  int* arr;
  int n;
  scanf("%d",&n);
  arr=(int *) malloc(n*sizeof(int));
  for(int i=0 ;i<n; i++){
    scanf("%d",arr+i);
  }
  int min=Min(arr,n);
  int sum=Sum(arr,n);
  printf("%d %d",min,sum);
  free(arr);
}
int Min (int arr[ ], int n){
    int min;
    min=*arr;
    for(int i=1 ;i<n; i++){
        if(*(arr+i)<min)
            min=*(arr+i);
    }
    return min;
}
int Sum (int arr [ ], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=*(arr+i);
    }
    return sum;
}