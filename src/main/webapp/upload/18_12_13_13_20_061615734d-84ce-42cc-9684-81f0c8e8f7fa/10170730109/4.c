#include <stdio.h>
char* correction(char* former){
    char* x=former;
    while(*former!='\0')
    {
        if(*former=='Z')
        {
            *former ='A';
        }
        else
        {
            (*former)++;
        }
        former++;
    }
    return x;
}
int main(void){
    int num=0,i=0;
    char str[51]={'\0'};
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%s",str);
        printf("case #%d: %s\n",i,correction(str));
    }
    return 0;
}