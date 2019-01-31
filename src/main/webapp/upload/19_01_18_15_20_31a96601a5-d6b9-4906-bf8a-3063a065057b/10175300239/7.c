#include <stdio.h>

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int m=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    m=a;
    if(b>m){
        m=b;
    }
    if(c>m){
        m=c;
    }
    if(d>m){
        m=d;
    }
    printf("%d",m);
    return 0;
}