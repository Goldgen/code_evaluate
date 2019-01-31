#include <stdio.h>
int main(void) {
    unsigned int x,p,n;
    int lenth = 0;
    scanf("%u %u %u",&x,&p,&n);
    lenth = sizeof(x)*8;
    unsigned int y,q;
    y=x<<(lenth-p-1);
    q=y>>(lenth-n);
    printf("%u",q);
    return 0;
}