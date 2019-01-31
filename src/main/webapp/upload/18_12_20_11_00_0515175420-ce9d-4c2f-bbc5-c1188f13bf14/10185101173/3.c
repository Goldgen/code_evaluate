#include <stdio.h>
#include <stdlib.h>

int min (int arr[ ], int n)
{
    int min;
    min=*arr;
    for(int i=1 ;i<n; i++){
        if(*(arr+i)<min)
            min=*(arr+i);
    }
    return min;
}

int sum (int arr [ ], int n)
{
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=*(arr+i);
    }
    return sum;
}

int main()
{
    int* arr;
    int n;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
      scanf("%d",arr+i);
    }
    int m=min(arr,n);
    int s=sum(arr,n);
    printf("%d %d",m,s);
    free(arr);
    return 0;
}


