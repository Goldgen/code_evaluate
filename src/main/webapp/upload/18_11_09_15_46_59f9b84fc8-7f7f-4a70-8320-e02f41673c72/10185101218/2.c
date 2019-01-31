#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    int n;
    c=d=e=f=0;
    a=2;
    b=1;
    for(n=0;n<50;n++){
        c=a/b;
        d+=c;
        e=b;
        b=a;
        a+=e;
    }
    printf("%.2lf",d);
    return 0;
}
