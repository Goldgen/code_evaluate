#include <stdio.h>
#include <string.h>

int n;

int main(int argc, char* argv[]){

    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 2*n-2*i; j++)
            printf(" ");
        printf("1");
        for(int j = 2; j <= i; j++)
            printf("+%d", j);
        printf("=%d", i);
        for(int j = i-1; j >= 1; j--)
            printf("+%d", j);
        if(i != n)
            printf("\n");
    }

}
