#include <stdio.h>
#include <string.h>

int Min (int arr[ ], int n){
    if(1 == n)
        return arr[0];
    int num = Min(arr, n-1);
    return arr[n-1] > num ? num : arr[n-1];
}
int Sum (int arr [ ], int n){

    if(1 == n)
        return arr[0];
    return arr[n-1] + Sum(arr, n-1);

}

int main(int argc, char* argv[]){

     int n;
     int arr[100];
     scanf("%d", &n);
     for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
     printf("%d %d", Min(arr, n), Sum(arr, n));

    return 0;
}
