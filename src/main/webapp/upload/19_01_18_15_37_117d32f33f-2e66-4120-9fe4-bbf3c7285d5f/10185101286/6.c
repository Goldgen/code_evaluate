#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b){
        d=a;
    }
    else d=b;
    if(c>d){
        d=c;
    }
    else d=d;
    printf("%d",d);
    return 0;
}
