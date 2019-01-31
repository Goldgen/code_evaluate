#include <stdio.h>
#include <string.h>
int main(){
    char str[120];
    gets(str);
    //char c=0;
    int a[120]={0};
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' ')
            continue;
        else{
            for(int j=i+1;j<strlen(str);j++){
                if(str[i]==str[j]){
                    a[i]++;
                    str[j]=' ';
                }
            }
        }
    }
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' ')
            continue;
        else{
            printf("%c %d; ",str[i],a[i]+1);
        }
    }
}
