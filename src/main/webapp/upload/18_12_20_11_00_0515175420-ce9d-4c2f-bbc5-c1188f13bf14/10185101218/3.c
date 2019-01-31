#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Min (int arr[ ], int n)
{
    if(*(arr+1) <= *arr&&n > 2){
        Min(arr+1,n-1);
    }
    else if(*(arr+1) <= *arr&&n == 2)
        return *(arr+1);
    else if(*(arr+1) > *arr&&n > 2){
        int temp = *(arr+1);
        *(arr+1) = *arr;
        *arr = temp;
        Min(arr+1,n-1);
    }
    else return *(arr);
}

int Sum (int arr [ ], int n)
{
    if(n > 1)
        return *arr+Sum(arr+1,n-1);
    else return *arr;
}

int main(void)
{
    int n,min,sum;
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&array[i]);
    }
    min = Min(array,n);
    sum = Sum(array,n);
    printf("%d %d",min,sum);
    return 0;
}
