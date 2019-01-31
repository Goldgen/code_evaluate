#include <stdio.h>
#include <string.h>

int n;

int main(int argc, char* argv[]){

    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf(" %d * %d =%3d", j, i, j*i);
        }
        if(i != n)
            printf("\n");
    }

}
