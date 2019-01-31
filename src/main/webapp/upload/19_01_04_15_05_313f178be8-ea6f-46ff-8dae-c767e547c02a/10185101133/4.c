#include <stdio.h>
#include <stdlib.h>

int main()
{
    char word[101];
    char s[101];
    int num[100]={0};
    int count=0,i=0;
    gets(s);
    while(s[i]!='\0'){
        int flag=-1;
        int j=0;
        if(s[i]==' '){
            i++;
            continue;
        }
        for(;j<count;j++){
            if(s[i]==word[j]){
                flag=j;
                break;
            }
        }
        if(flag==-1){
            word[count]=s[i];
            i++;
            num[count]++;
            count++;
        }
        else{
            num[j]++;
            i++;
        }
    }
    for(i=0;i<count;i++){
            printf("%c %d; ",word[i],num[i]);
        }
    return 0;
}
