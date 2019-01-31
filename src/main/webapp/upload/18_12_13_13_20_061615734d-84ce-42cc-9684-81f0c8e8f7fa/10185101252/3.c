#include <stdio.h>
#include <string.h>

char* i2a(char* p,int n){
    if(n == 0)
        return p;
    char* q = i2a(p, n/10);
    *q = n%10 + '0';
    return q + 1;
}

int main(){

    char str[1005];
    int num;
    memset(str, 0, sizeof(str));
    scanf("%d", &num);
    i2a(str, num);
    printf("%s", str);
    return 0;
}
