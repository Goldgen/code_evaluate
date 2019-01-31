#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(a){
        if(a<b){
            c=a;
            a=b;
            b=c;
        }
        a=a%b;
    }
    printf("最大公约数是: %d",b);
    return 0;
}
