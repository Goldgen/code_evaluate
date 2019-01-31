#include <stdio.h>
#include <stdlib.h>

/*??????4???int?????????
1 2 3 4
4  */

int main()
{
    int a, b, c, d, m, n, res;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if(a>b)
        m=a;
    else
        m=b;
    if(c>d)
        n=c;
    else
        n=d;
    if(m>n)
        res=m;
    else
        res=n;
    printf("%d", res);
    return 0;
}
