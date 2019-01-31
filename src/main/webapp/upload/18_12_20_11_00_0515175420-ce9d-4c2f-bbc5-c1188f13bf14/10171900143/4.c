#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<string.h>

void reverse(){
    char ch=getchar();
    if(ch!='?'){
        reverse();
        putchar(ch);
    }

}

int main( ){
    reverse();
    return 0;
}

