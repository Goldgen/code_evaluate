#include <stdio.h>
#include <string.h>
#include <ctype.h>
char str[10001];
int len;

int isUpYuan(char c){
    if(toupper(c) == 'A' || toupper(c) == 'E' || toupper(c) == 'I' ||
       toupper(c) == 'O' ||toupper(c) == 'U')
        return 1;
    return 0;
}

int main(int argc, char* argv[]){
    scanf("%s", str);
    len = strlen(str);

    for(int i = 0; i < len; i++){
        if(isUpYuan(str[i])){
            printf("yes", str[i]);
            return 0;
        }
    }
    printf("no");
    return 0;
}
