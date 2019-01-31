#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){

    char hex[100];
    long long num;
    scanf("%s", hex);
    sscanf(hex, "%x", &num);
    printf("%lld", num);
    return 0;
}
