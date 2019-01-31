#include <stdio.h>

int main()
{
    int a,b,c;
    for(a=1;a<=100/7;a++){
        for(b=1;b<=100/5;b++){
            c=(100-7*a-5*b)*3;
            if(a+b+c==100)
                printf("%d %d %d",a,b,c);
        }
    }
    return 0;
}