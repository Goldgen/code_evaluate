#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 52

void CaesarCode(char* code, char* plain);

int main()
{
    int t;
    scanf("%d", &t);
    getchar();

    int i;
    for(i = 0; i < t; i++){
        char inpt[MAXSIZE] = {0};
        char otpt[MAXSIZE] = {0};
        gets(inpt);

        CaesarCode(inpt, otpt);

        printf("case #%d: %s", i, otpt);
        if(i < t - 1){
            printf("\n");
        }
    }

    return 0;
}

void CaesarCode(char* code, char* plain){
    int codeLen = strlen(code);
    int i;
    for(i = 0; i < codeLen; i++){
        if(code[i] == 'Z'){
            plain[i] = 'A';
        }else{
            plain[i] = code[i] + 1;
        }
    }
    plain[i] = 0;
}
