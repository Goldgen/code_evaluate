#include <stdio.h>
#include <string.h>
char* i2a(char* p, int n){
    char* x = p;
    if(n / 10 == 0)
        *x = n + '0';
    else{
        *x = n % 10 + '0';
        i2a(p + 1, n / 10);
    }
}
int main(){
    char data[30] = {'\0'};
    int num;
    scanf("%d", &num);
    i2a(data, num);
    for(int i = strlen(data) - 1; i >= 0; --i)
        printf("%c", data[i]);
}
