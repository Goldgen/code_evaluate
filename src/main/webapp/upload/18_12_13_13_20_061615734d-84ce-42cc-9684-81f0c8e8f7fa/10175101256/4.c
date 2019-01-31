#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char s[100];
        scanf("%s",s);
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='Z')
                s[i]='A';
            else
                s[i]++;
        }
        printf("case #%d: %s\n",i,s);
    }
}