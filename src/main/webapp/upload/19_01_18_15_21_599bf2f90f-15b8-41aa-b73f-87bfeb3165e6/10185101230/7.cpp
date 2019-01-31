#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main(void)
{
    int myIntA;
    int myIntB;
    int myIntC;
    int myIntD;
    scanf("%d %d %d %d",&myIntA,&myIntB,&myIntC,&myIntD);
    if (myIntA<myIntB)
        myIntA=myIntB;
    if (myIntA<myIntC)
       myIntA=myIntC;
    if (myIntA<myIntD)
       myIntA=myIntD;
        printf("%d",myIntA);
    return 0;
}
