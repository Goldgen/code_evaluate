#include <stdio.h>

int main()
{
    int x=0;
    int y=0;
    scanf("%d",&x);
    if(x<0){
        y=-1;
    }
    if(x>0){
        y=1;
    }
    printf("%d",y);
    return 0;
}