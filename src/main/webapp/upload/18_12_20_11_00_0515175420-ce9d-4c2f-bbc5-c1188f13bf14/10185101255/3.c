#include <stdio.h>
#include <string.h>


int Min(int arr[], int n);

int Sum(int arr[], int n);

int main() {
    int n = 0;
    int arr[105];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d %d", Min(arr, n), Sum(arr, n));
    return 0;
}

int Min(int arr[], int n) {
    static int min = 2147483647;
    if (n == 0) ;
    else {
        if (arr[0] < min)  min = arr[0];
        Min(arr + 1, n - 1);
    }
    return min;
}

int Sum(int arr[], int n) {
    static int s = 0;
    if (n == 0) ;
    else {
        s += arr[0];
        Sum(arr + 1, n - 1);
    }
    return s;
}
