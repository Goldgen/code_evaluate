#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if(a>b){
        e=a;
    }
    else e=b;
    if(c>e){
        e=c;
    }
    else e=e;
    if(d>e){
        e=d;
    }
    else e=e;
    printf("%d",e);
    return 0;
}
