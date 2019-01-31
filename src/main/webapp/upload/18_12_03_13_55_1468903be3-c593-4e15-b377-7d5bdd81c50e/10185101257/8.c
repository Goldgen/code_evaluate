#include <stdio.h>
#include <string.h>
int main(){
    char data[80] = {'\0'};
    int len;
    gets(data);
    len = strlen(data);
    for(int i = 0; i < (len-1)/2; ++i){
        if(data[i]!=data[len-1-i]){
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}
