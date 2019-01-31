#include <stdio.h>
int main()
{
    int i,j,m,n;
    m=0;
    n=0;
    for(i=1;i<=100;i+=2)
        m+=i;
    for(j=2;j<=100;j+=2)
        n+=j;
    printf("%d %d",m,n);
    return 0;
}
