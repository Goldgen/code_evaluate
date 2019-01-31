#include <stdio.h>
#include <string.h>
#define ARRA_SIZE 100

int main()
{
    char str[ARRA_SIZE] = {'\0'};
    gets(str);
    char inv[ARRA_SIZE] = {'\0'};//??
    size_t len = strlen(str);
    int i;
    for (i=0; i<len; i++){
        inv[len-1-i] = str[i];
    }
    for (i=0; i<len; i++){
        if (str[i]!=inv[i]){
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}
