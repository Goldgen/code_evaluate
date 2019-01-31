#include <stdio.h>

void oppositeOrder(int);
int main(void)
{
    int x;
    scanf("%d ",&x);
    oppositeOrder(x);
    if(x!=0) printf("%d",x);
    return 0;
}
void oppositeOrder(int x){
    if(x!=0){
        scanf("%d ",&x);
        oppositeOrder(x);
        if(x!=0) printf("%d ",x);
    }
}
