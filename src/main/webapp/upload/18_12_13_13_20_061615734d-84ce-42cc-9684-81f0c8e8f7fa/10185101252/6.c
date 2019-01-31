#include <stdio.h>
#include <string.h>


void rotate(int* p, int n, int m){
    for(int i = n-1; i >= 0; i --)
        p[i+m] = p[i];
    for(int i = 0; i < m; i++)
        p[i] = p[i+n];

}


int main(){

    int n, m;
    int arr[1000];
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    rotate(arr, n, m);
    printf("%d", arr[0]);
    for(int i = 1; i < n; i++)
        printf(" %d", arr[i]);

    return 0;
}
