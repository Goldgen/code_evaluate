#include <stdio.h>
#include <string.h>
int Min (int arr[ ], int n);
int Sum (int arr[ ], int n);
int main(){
    int n;
    scanf("%d", &n);
    int data[n];
    for(int i = 0; i < n; ++i)
        scanf("%d", &data[i]);
    int sum = Sum(data, n);
    int min = Min(data, n);
    printf("%d %d", min, sum);
    return 0;
}

int Min(int arr[ ], int n){
    if(n == 1)
        return *arr;
    else{
        if(Min(arr, n - 1) < *(arr + n - 1))
            return Min(arr, n - 1);
        else
            return *(arr + n - 1);
    }
}
int Sum(int arr[ ], int n){
    if(n - 1 == 0)
        return *(arr + n - 1);
    else
        return *(arr + n - 1) + Sum(arr, n - 1);
}

