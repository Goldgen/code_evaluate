#include <stdio.h>
#include <string.h>
char* strmcpy(char* t, char* s, int m){
    for(s=s+m;*s!='\0';){
        *t++=*s++;
    }
    *t='\0';
    return t;
}
int main(void){
    char strt[81],strs[81];
    int m=0;
    gets(strs);
    scanf("%d",&m);
    strmcpy(strt,strs,m);
    printf("%s",strt);
    return 0;
}