#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int myIntA;
    int myIntB;
    scanf("%d",&myIntA);
    scanf("%d",&myIntB);

    if (myIntA > myIntB)
        printf("%d",myIntA);
    else
        printf("%d",myIntB);
    return 0;
}
