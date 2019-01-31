#include<stdio.h>
#include <string.h>
int main(){
    char str[100];
    char s[100],sm[100];
    int max=0;
    gets(str);
    int j=0;
    for(int i=0;i<=strlen(str);i++){
        if(str[i]!='\t'&&str[i]!='\r'&&str[i]!='\n'&&str[i]!=' '&&str[i]!='\0'){
        s[j]=str[i];
        j++;
        }
        else{
            if(j>max){
                max=j;
                s[j]='\0';
                strcpy(sm,s);
            }
            j=0;}

    }
                if(j>max){
                max=j;
                strcpy(sm,s);
                sm[j]='\0';
            }
    printf("%s\n",sm);
}

