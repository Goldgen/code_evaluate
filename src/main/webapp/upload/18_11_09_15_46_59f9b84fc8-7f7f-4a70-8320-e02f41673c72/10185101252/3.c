#include <stdio.h>
#include <string.h>

int n;

int main(int argc, char* argv[]){

    scanf("%d", &n);
    for(int i = 1; i < 2*n; i++){
        if(i <= n){
            for(int j = 0; j < n-i; j++)
                printf(" ");
            for(int j = 0; j < 2*i-1; j++)
                printf("%c", 'A' + i - 1);

        }else{
            for(int j = 0; j < i-n; j++)
                printf(" ");
            for(int j = 0; j < 4*n-2*i-1; j++)
                printf("%c", 'A' + i - 1);
        }
        if(i != 2*n-1)
            printf("\n");
    }

}
