#include <stdio.h>

int main(void) {
    int x,y;
    scanf("%d\n",&x);
    if(x<0)
        y=-1;
    else if(x==0)
        y=0;
    else
        y=1;
    printf("%d",y);
    return 0;
}
