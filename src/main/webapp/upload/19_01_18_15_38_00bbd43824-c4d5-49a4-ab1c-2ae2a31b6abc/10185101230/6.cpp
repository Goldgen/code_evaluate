#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main(void)
{
    int myIntA;
    int myIntB;
    int myIntC;
    scanf("%d %d %d",&myIntA,&myIntB,&myIntC);
    if (myIntA>myIntB && myIntA>myIntC)
        printf("%d",myIntA);
    if (myIntB>myIntA && myIntB>myIntC)
        printf("%d",myIntB);
    if (myIntC>myIntB && myIntC>myIntA)
        printf("%d",myIntC);
    return 0;
}
