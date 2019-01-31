#include <stdio.h>
#include <stdlib.h>

/* ????????????????
??????2 3 4?? 5 6 7??20 30??
??????2,3,4?? 5,6,7?? 20,30??
???????????????INT_MAX?
???
1 3 5
7 9 11
13 15
64
1,3,5
7,9,11
13,15
64*/

int main()
{
    int a1, a2, a3, b1, b2, b3, c1, c2, res;
    scanf("%d%d%d%d%d%d%d%d", &a1, &a2, &a3, &b1, &b2, &b3, &c1, &c2);
    /*scanf("%d%d%d", &a1, &a2, &a3);
    scanf("%d%d%d", &b1, &b2, &b3);
    scanf("%d%d", &c1, &c2);*/
    /*scanf("%d,%d,%d", &a1, &a2, &a3);
    scanf("%d,%d,%d", &b1, &b2, &b3);
    scanf("%d,%d", &c1, &c2);*/
    res = a1+a2+a3+b1+b2+b3+c1+c2;
    printf("%d\n", res);
    int a11, a21, a31, b11, b21, b31, c11, c21, res1;
    scanf("%d,%d,%d%d,%d,%d%d,%d", &a11, &a21, &a31, &b11, &b21, &b31, &c11, &c21);
    res1 = a11+a21+a31+b11+b21+b31+c11+c21;
    printf("%d", res1);
    return 0;
}
