#include <stdio.h>

int main(void)
{
    unsigned int x,p,n;
    scanf("%d %d %d",&x,&p,&n);
    unsigned int a = 1<<p;
    unsigned int i = 1;
    while (i<n){
        a = a|(a>>1);
        i++;
    }
    printf("%u",x = x^a);
    return 0;
}
