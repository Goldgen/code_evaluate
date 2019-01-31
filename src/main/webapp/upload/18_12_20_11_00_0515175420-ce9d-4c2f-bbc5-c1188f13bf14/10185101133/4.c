#include <stdio.h>
#include <stdlib.h>

void reverse(char *p){
    if(*(p+1)=='?'){
        printf("%c",*p);
        return;}
    reverse(p+1);
    printf("%c",*p);
    return ;
}

int main()
{
    char str[101];
    gets(str);
    reverse(str);
    return 0;
}
