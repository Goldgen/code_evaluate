#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
//#include "function.h"
int GDB(int,int);
void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",GDB(a,b));
}
int GDB(int a,int b){
    if(b == 0)return a;
    return GDB(b,a%b);
}
