#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* change(char*);
int main()
{
    int times;
    scanf("%d",&times);
    for(int i=0; i<times; i++){
        char ch[60];
        scanf("%s",ch);
        change(ch);
        printf("case #%d: ",i);
        if(i==times-1)
        printf("%s",ch);
        else
        printf("%s\n",ch);
    }
}
char*change(char* ch){
    for(int i=0; i<strlen(ch); i++){
        if(*(ch+i)=='Z')
            *(ch+i)='A';
        else
            *(ch+i)=*(ch+i)+1;
    }
    return ch;
}