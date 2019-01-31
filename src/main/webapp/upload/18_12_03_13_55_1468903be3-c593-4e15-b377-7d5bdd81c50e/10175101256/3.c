#include <stdio.h>
#include <string.h>
int main(){
    char s1[81],s2[81];
    scanf("%s",&s1);
    scanf("%s",&s2);
    int t1=strlen(s1);
    int t2=strlen(s2);
    int t=t1;
    int tm=t2;
    int x=1;
    if(t1>t2){
        t=t2;
        tm=t1;
        x--;}
    for(int i=0;i<t;i++){
        printf("%c%c",s1[i],s2[i]);
    }
    if(x){
        for(int j=t;j<tm;j++){
            printf("%c",s2[j]);
        }
    }
    if(!x){
        for(int j=t;j<tm;j++){
            printf("%c",s1[j]);
        }
    }
}
