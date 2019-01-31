/*
 * 96: ???m??????????
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotate(int* p, int n, int m) {
    int *t = (int*)malloc(sizeof(int) * m);
    int i;
    memcpy(t, p + n - m, sizeof(int) * m);
    for (i = n-m-1; i >= 0; i--) {
        p[i + m] = p[i];
    }
    memcpy(p, t, sizeof(int) * m);
    free(t);
}

int main(void) {
    int i, n, m;
    scanf("%d%d",&n,&m);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    rotate(arr, n, m);
    for (i = 0; i < n; i++) {
        printf("%d%c", arr[i], i==n-1?'\n':' ');
    }
    return 0;
}
