#include <stdio.h>

int Fabonacci(int n){
    if(n == 1 || n == 2)
        return 1;
    return Fabonacci(n-1) + Fabonacci(n-2);
}

int main(int argc, char* argv[]){

    int a;
    scanf("%d", &a);
    if(a == 0)
        printf("0");
    else
        printf("%d", Fabonacci(a));


    return 0;
}
