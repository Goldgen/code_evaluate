#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 90

int main()
{
    char src[MAXSIZE] = {0};
    gets(src);
    int srcLen = strlen(src);

    char frmer[srcLen+1];
    char later[srcLen+1];

    frmer[srcLen] = later[srcLen] = 0;

    int i;
    for(i = 0; i < srcLen; i++){
        frmer[i] = src[i];
        later[i] = src[srcLen-1-i];
    }

    if(strcmp(frmer, later)){
        printf("False");
    }else{
        printf("True");
    }

    return 0;
}
