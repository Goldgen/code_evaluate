#include <stdio.h>
#include <string.h>
struct L{
    char letter;
    int num;
}Le[102];
int main()
{
    int i=0,j=0,l;
    for(i=0;i<102;i++){
        Le[i].letter=' ';
        Le[i].num=0;
    }
    char str[101];
    gets(str);
    l=strlen(str);
    for(i=0;i<=l;i++){
        for(j=0;j<102;j++){
            if(str[i]==Le[j].letter){
                Le[j].num++;
                break;
            }
        if(j=102){
            Le[i].letter=str[i];
            Le[i].num=1;
        }
    }}
    for(i=0;i<102;i++){
        if((Le[i].letter!=' ')&&(Le[i].letter!='\0')&&(Le[i].num>0))
            printf("%c %d; ",Le[i].letter,Le[i].num);
    }
}
