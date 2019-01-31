#include <stdio.h>

int GCD(int a, int b){
    if(b == 0)
        return a;
    return GCD(b, a%b);
}

int main(int argc, char* argv[]){

    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", GCD(a, b));


    return 0;
}
