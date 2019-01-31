#include <stdio.h>
int main(void)
{
    int n;
    double m=1;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        m*=i;
    printf("%.0lf",m);

}
