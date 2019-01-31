#include <stdio.h>
void invert(char* num){
    if(*num!='\?'){
        num++;
        invert(num);
        printf("%c",*--num);
    }
}
int main(void){
    char num[1000];
    gets(num);
    invert(num);
    return 0;
}



