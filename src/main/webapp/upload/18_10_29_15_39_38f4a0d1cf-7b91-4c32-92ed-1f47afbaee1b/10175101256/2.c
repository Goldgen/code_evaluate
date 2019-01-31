#include <stdio.h>
#include <stdlib.h>

int main()
{
    float e=0,a;
    int n=1;
    for(int i=0;;i++){
        if(i)
            n*=i;
        a=1.0/n;
        e+=a;
        if(a<10e-6)
            break;
    }
    printf("%.6f",e);
    return 0;
}
