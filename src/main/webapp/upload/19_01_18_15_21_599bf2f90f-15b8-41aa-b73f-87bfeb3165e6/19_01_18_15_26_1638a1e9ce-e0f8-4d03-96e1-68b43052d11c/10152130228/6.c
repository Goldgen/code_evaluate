#include <stdio.h>
#include <stdlib.h>

/*??????3??(int??)?????
???
1 2 3
3*/

int main()
{
    int a, b, c, m, res;
    scanf("%d%d%d", &a, &b, &c);
    if(a>b)
        m=a;
    else
        m=b;
    if(m>c)
        res=m;
    else
        res=c;
    printf("%d", res);
    return 0;
}
