#include<stdio.h>
#include<string.h>
int main(){
    char str[101];
    int count=0,j=0,k=0;
    char c;
    gets(str);
    while(str[0]!='\0'){
        count=0;
        c=str[0];
        for(j=0;str[j]!='\0';j++){
            if(c==str[j]){
                count++;
                for(k=j;str[k]!='\0';k++){
                    str[k]=str[k+1];
                }
                j--;
            }
        }
        if(c!=' ') printf("%c %d; ",c,count);
    }
    return 0;
}