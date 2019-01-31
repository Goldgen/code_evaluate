#include <stdio.h>
#include <string.h>
void rotate(int* p, int n, int m){
    for(int j = 0; j < m; ++j){
        int tmp = *(p + n - 1);
        for(int i = n; i > 0; i--)
            *(p + i) = *(p + i - 1);
        *p = tmp;
    }

}
int main(){
    int m, n;
    scanf("%d %d", &n, &m);
    int data[n];
    for(int i = 0; i < n; ++i)
        scanf("%d", &data[i]);
    rotate(data, n, m);
    for(int j = 0; j < n; ++j){
        printf("%d", data[j]);
        if(j < n - 1)
            printf(" ");
    }
    return 0;
}
