#include <stdio.h>
#include <string.h>
char* Rev(char* p){
    char* x = p;
    if(*(x + 1) == '\0')
        printf("%c", *x);
    else{
        Rev(p + 1);
        printf("%c", *x);
    }
}
int main(){
    char data[1000] = {'\0'}, ch;
    int cnt = 0;
    while((ch = getchar()) != EOF){
        if(ch == '?')
            break;
        data[cnt] = ch;
        ++cnt;
    }
    Rev(data);
    return 0;
}
