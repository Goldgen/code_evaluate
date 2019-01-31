#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isonly(char a, char *m, int mcnt){
    for(int i=0; i<mcnt; i++){
        if(a==m[i]) return 0;
    }
    return 1;
}

int main()
{
    char str[111], mmm[99];
    gets(str);
    int len, mcnt=0;
    len=strlen(str);
    for(int i=0; i<len; i++){
        if(str[i]!=' '){
            if((i==0)||(isonly(str[i], mmm, mcnt)==1)){
                mmm[mcnt]=str[i];
                int cnt=1;
                for(int j=i+1; j<len; j++)
                    if(mmm[mcnt]==str[j]) cnt++;
                printf("%c %d; ", mmm[mcnt], cnt);
                mcnt++;
            }
        }
    }
    return 0;
}
