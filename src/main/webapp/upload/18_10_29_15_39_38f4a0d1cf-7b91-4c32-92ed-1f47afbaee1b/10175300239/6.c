#include <stdio.h>

int main()
{
    int a,b,t;
    int r=1;
    scanf("%d %d",&a,&b);
    if(a<b){
        t=a;
        a=b;
        b=t;
    }
    while(r!=0){
        r=a%b;
        a=b;
        b=r;
    }
    printf("最大公约数是: %d",a);
    return 0;
}