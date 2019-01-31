#include <stdio.h>
#include <string.h>

int n = 0;
long long int result = 1;

int main(int argc, char* argv[]){

    scanf("%d", &n);
    for(int i = 1; i <= n; i++ ){
        result = (result *i) % 20181111;
    }
    printf("%d", result);
    return 0;
}
