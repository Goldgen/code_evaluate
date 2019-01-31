#include <stdio.h>
#include <stdlib.h>

/*????
                  -1     (x<0)
        y=?      0      (x=0)
                  1      (x>0)
??????????x????y????
25
1*/

int main()
{
    int x, y;
    scanf("%d", &x);
    if(x<0) y=-1;
    else if(x==0) y=0;
    else y=1;
    printf("%d", y);
    return 0;
}
