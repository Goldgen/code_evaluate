#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ch{
    char a;
    int t;
}lt[200];

int main(){
    char str[200];
    int i,j,k,l;
    fgets(str,200,stdin);
    l=strlen(str);
    for(i=0,j=0;i<l;i++){
        if(str[i]==' '||str[i]=='\t'||str[i]=='\n') continue;
        for(k=0;k<j;k++)
                if(lt[k].a==str[i]) break;
        lt[k].a=str[i];
        lt[k].t++;
        if(j==k) j++;
    }
    for(i=0;i<j;i++){
        printf("%c %d; ",lt[i].a,lt[i].t);
    }

    return 0;
}