#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mmm(char *str){
    int len;
    len = strlen(str);
    for(int i=0; i<len/2; i++){
        if(str[i]!=str[len-1-i])
            return 0;
    }
    return 1;
}

int main()
{
    char str[88];
    gets(str);
    int k;
    k = mmm(str);
    if(k==1) printf("True");
    else printf("False");
    return 0;
}
