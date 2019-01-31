#include <stdio.h>


void rotate(int* p, int n, int m);

int main() {
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (unsigned int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    rotate(arr, n, m);
    
    return  0;
}

void rotate(int* p, int n, int m) {
    int temp[n];
    
    for (unsigned int i = 0; i < n; i++) {
        temp[i] = *(p + i);
    }
    
    for (unsigned int i = 0; i < n - m; i++) {
        *(p + i + m)= temp[i];
    }
    
    for (unsigned int i = n - m; i < n; i++) {
        static int s = 0;
        *(p + s) = temp[i];
        s++;
    }
    
    for (unsigned int i = 0; i < n; i++) {
        printf("%d", *(p + i));
        if (i < n - 1) printf(" ");
    }
}
