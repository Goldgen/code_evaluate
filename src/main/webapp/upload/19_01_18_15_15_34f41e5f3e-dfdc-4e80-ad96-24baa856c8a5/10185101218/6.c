#include<stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a>b?b:a;
    for(;c>0;c--){
        if(a%c==0&&b%c==0)
            break;
    }
    printf("最大公约数是: %d",c);
    return 0;
}
