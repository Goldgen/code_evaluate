#include <stdio.h>
#include <iostream>

template <typename T>
T Fun(T a,int n){
    return n == 1?a:a*Fun(a,n - 1);
}


int main(void)
{
    printf("%u\n",((int)Fun((int)2,31) - 1)*2 + 1);
    printf("%llu",((long long)Fun((long long)2,63) - 1)*2 + 1);
}

