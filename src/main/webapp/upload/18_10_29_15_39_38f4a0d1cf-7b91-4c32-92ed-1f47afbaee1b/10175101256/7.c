#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a;
    int n=0;
    scanf("%u",&a);
    while(a){
        if(a%2)
            n++;
        a/=2;
    }
    printf("%d",n);
    return 0;
}
