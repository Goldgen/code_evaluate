#include<stdio.h>
int main(void)
{   float a=100,c=0;
     int b=1;
    for(;b<=9;++b,a=a/2)
    c+=a;
    a=a/2;
    c=c+100;
    printf("%.3f %.3f",c,a);
    return 0;
}
