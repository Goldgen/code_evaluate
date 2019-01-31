#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Input[80];
    int i=0;
    scanf("%s",Input);
    for(;i<8;i++){
        if(97<=Input[i] && Input[i]<=99){
            printf("2");
            continue;}
        else if(Input[i]<='f'){
            printf("3");
            continue;}
        else if(Input[i]<='i'){
            printf("4");
            continue;}
        else if(Input[i]<='l'){
            printf("5");
            continue;}
        else if(Input[i]<='o'){
            printf("6");
            continue;}
        else if(Input[i]<='s'){
            printf("7");
            continue;}
        else if(Input[i]<='v'){
            printf("8");
            continue;}
        else
            printf("9");
    }
    return 0;
}
