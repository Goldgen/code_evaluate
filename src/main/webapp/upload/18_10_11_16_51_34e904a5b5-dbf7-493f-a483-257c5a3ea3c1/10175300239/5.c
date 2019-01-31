#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1;
    int b=1;
    int c=1;
    long long d=1L;
    while(a<=10){
        b=a*b;
        a+=1;
    }
    printf("%d\n",b);
    while(c<=20){
        d=c*d;
        c+=1;
    }
    printf("%d",d);
    return 0;
}