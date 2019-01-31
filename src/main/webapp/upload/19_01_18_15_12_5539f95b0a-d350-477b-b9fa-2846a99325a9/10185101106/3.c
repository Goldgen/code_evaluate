#include<stdio.h>
int main() {
    unsigned x,p,n;
    scanf("%u %u %u",&x,&p,&n);
    printf("%u",-~(x>>p+1-n));
    return 0;
}