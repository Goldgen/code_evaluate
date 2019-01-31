#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
//#include "function.h"
void f();
int ret=0;
void main(){
    f();
}

void f(){
    int n;
    scanf("%d",&n);
    if (n>0){
        f();
        if(ret==1)printf(" ");
        printf("%d",n);
        ret =1;
    }
}
