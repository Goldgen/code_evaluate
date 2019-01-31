#include <stdio.h>
#include <stdlib.h>
int main()
{
    double a=1.0,b=1.0,m=0.0;
    int i;
    for(i=1;i<=25;i++){
        a=a+b;
        m=m+a/b;
        b=a+b;
        m=m+b/a;
    }
    printf("%.2lf",m);
    return 0;
}
