#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
//#include "function.h"

unsigned long long f(int);
void main(){
    int n;
    scanf("%d",&n);
    printf("%lld",f(n));
}

unsigned long long f(int n){
    if (n==0 || n==1)return n;
    return f(n-1)+f(n-2);

}
