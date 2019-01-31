#include <stdio.h>

int main(void)
{
    double x;
    int y;
    scanf("%lf",&x);
    if (x<0){
        printf("%d",y=-1);
    }
    else{
        if (x==0){
            printf("%d",y=0);
        }
        else{
            printf("%d",y=1);
        }
    }
    return 0;
}
