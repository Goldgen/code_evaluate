#include <stdio.h>

int n, mid;
int star = '*', space = ' ';

int main(){

    scanf("%d", &n);
    mid = n/2 + 1;
    for(int i = 1; i < mid ; i++){
        for(int j = 1; j <= mid + i - 1; j++){
            if(j == mid - i + 1 || j == mid + i - 1)
                putchar(star);
            else
                putchar(space);
        }
        printf("\n");
    }
    for(int i = 1 ; i <= n; i++)
        putchar(star);

}
