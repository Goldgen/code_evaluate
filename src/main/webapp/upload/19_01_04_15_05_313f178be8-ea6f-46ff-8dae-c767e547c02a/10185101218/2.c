#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0,a1 = 0,b = 0,js1 = 0,js2 = 0;
    long long c = 0;
    scanf("%d+%d=%lld",&a,&b,&c);
    a1 = a;
    if(a + b < c){
        while(a + b < c){
            a *= 10;
            js1++;
        }
        if(a + b == c) printf("%d",js1);
        else{
            while(a1 + b < c){
                b *= 10;
                js2++;
            }
            printf("-%d",js2);
        }
    }
    else if(a + b == c) printf("0");
    return 0;
}
