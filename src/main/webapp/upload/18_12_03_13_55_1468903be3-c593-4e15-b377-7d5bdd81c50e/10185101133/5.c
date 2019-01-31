#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rightloop(char s[]){
    char tmp[81];
    strcpy(tmp,s+strlen(s)-1);
    strcpy(tmp+1,s);
    *(tmp+strlen(s))='\0';
    strcpy(s,tmp);
}

int main()
{
    char s[81];
    char t[81];
    char cpy[81];
    scanf("%s",s);
    scanf("%s",t);
    int i=0;
    strcpy(cpy,s);
    while(i<=strlen(s)){
        if(strcmp(s,t)==0){
            printf("\"%s\" is a rotation of \"%s\"",cpy,t);
            return 0;}
        rightloop(s);
        i++;
    }
    printf("\"%s\" is NOT a rotation of \"%s\"",cpy,t);
    return 0;
}
