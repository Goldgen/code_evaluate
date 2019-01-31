#include <stdio.h>
int main()
{
    int m, n, r;
    scanf ("%d %d",&m,&n);
    if (m>n)
        {
            r=m;
            m=n;
            n=r;
        }
    r=n%m;
    while (r!=0){
        n = m;
        m = r;
        r = n%m;
    }
    printf ("最大公约数是: %d",m);
    return 0;
}
