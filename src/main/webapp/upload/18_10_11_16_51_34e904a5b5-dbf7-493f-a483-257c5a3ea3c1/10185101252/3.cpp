#include <stdio.h>
#include <string.h>

int num;

int main(int argc, char* argv[]){

    scanf("%d", &num);
    printf("%d %d", num%10, (num/10)%10);

    return 0;
}
