#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){

    char str[1001];
    int len;
    gets(str);
    len = strlen(str);
    int result = 1;
    for(int i = 0; i < len; i++){
        if(str[i] != str[len - i - 1])
            result = 0;
    }
    if(result == 1){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}
