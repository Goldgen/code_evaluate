#include <stdio.h>

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int m=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a<=c||a<=b&&a>=c){
        m=a;
    }
    else if(b>=a&&b<=c||b<=a&&b>=c){
        m=b;
    }
    else{
        m=c;
    }
    printf("%d",m);
}