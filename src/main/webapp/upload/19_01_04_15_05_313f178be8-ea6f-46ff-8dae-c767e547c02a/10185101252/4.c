#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
char ascii[255] = "";
char exist[255] = "";
char str[105];
int main(void){

    gets(str);
    int len = strlen(str);
    for(int i = 0; i < len; i++)
        ascii[str[i]]++;
    /*
    printf("%c %d;", str[0], ascii[str[0]]);
    exist[str[0]] = 1;
    */
    for(int i = 0; i < len; i++){
        if(str[i] != ' ' && exist[str[i]] == 0 && ascii[str[i]] != 0){
            printf("%c %d; ", str[i], ascii[str[i]]);
            exist[str[i]] = 1;
        }
    }


    return 0;
}

