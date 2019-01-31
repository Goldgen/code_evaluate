#include <stdio.h>
#include <iostream>

template <typename T>
T Fun(T a,int n){
    return n == 1?a:a*Fun(a,n - 1);
}


int main(void){
    printf("%d\n%d\n",(char)0x7F,(char)0x80);
    printf("%d\n%d",(int)Fun((int)2,31) - 1,(int)Fun((int)2,31));
    return 0;
}
