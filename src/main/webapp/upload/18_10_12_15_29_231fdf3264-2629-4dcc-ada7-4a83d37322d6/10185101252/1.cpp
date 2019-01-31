#include <stdio.h>
#include <limits.h>
int main(int argc, char* argv[]){

    unsigned long long a = 0;
    unsigned int b = 0;
    a -= 1;
    b -= 1;
    printf("%u\n", b);
    printf("%llu", a);


    return 0;
}
