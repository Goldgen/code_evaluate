#include <stdio.h>
int main(int argc, char* argv[]){

    int i;
    unsigned long long result;
    result = 1;
    for(i = 1; i <= 10; i++){
        result *= i;
    }
    printf("%llu\n", result);

    result = 1;
    for(i = 1; i <= 20; i++){
        result *= i;
    }
    printf("%llu", result);

    return 0;
}
