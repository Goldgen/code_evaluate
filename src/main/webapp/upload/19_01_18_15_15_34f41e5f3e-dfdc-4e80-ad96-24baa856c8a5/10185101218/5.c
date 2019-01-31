#include<stdio.h>
int main(void)
{
    int a,b,c;
    a=b=c=0;
    for(;a<=100;a++){
    if(a%2==0)
        b+=a;
    else
        c+=a;
    }
    printf("%d %d",c,b);
    return 0;
}
