#include<stdio.h>
#include <string.h>
int main(){
    char str[100];
    char s[100],sm[100];
    int t=0,weizhi=-1;
    gets(str);
    gets(sm);
    int n=strlen(sm);
    for(int i=0;i<strlen(str);i++){
        strncpy(s,str+i,n);
        s[n]='\0';
        if(strcmp(s,sm)==0){
            if(t==0)
                weizhi=i;
            t++;
        }
    }
    printf("%s: %d time(s), first at %d\n",sm,t,weizhi);
}

