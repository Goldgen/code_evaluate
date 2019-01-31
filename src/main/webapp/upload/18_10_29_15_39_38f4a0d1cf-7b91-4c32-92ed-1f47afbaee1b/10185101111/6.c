#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,t;
    scanf("%d %d",&a,&b);
    if(a<b){
        t=a;
        a=b;
        b=t;
    }while(t!=0){
        t=a%b;
        a=b;
        b=t;
    }printf("最大公约数是: %d",a);
}
