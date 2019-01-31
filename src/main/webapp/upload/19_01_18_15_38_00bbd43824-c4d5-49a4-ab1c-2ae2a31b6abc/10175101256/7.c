#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(b>a)
        a=b;
    if(c>a)
        a=c;
    if(d>a)
        a=d;
    printf("%d",a);
}
