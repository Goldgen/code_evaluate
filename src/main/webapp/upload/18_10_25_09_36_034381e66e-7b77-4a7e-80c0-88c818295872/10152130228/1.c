#include <stdio.h>
#include <stdlib.h>

/*一球从100米高度落下，每次落地后跳回原高度的一半，再落下。
编程求它在第10次落地时，共经过距离为多少米？第10次落地后的反弹有多高？*/
int main()
{
    int h=100, i;
    double s=100, hh=50;
    for(i=0; i<9; i++){
        s = s+2*hh;
        hh /= 2;
    }
    printf("%.3f %.3f", s, hh);
    return 0;
}
