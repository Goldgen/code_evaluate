#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int turn(char* str)
{
    int tag=0;
    for(int k=0;k<strlen(str)-1;++k){
        if(str[k]!=str[strlen(str)-k-1])
            tag++;
    }
    if(tag==0)
        return 1;
    else
        return 0;
}

int main()
{
    char text[81];
        gets(text);
        if(turn(text)==0)
        printf("False");
    else
        printf("True");
    return 0;
}
