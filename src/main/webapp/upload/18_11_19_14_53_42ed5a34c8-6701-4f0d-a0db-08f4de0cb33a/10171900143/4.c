#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
//#include "function.h"
void f(int);
void main(){
    int n;
    scanf("%d",&n);
    f(n);
}

void f(int n){
    if (n<2 )printf("%d",n);
    else {
        f(n/2);
        printf("%d",n%2);
    }
}
