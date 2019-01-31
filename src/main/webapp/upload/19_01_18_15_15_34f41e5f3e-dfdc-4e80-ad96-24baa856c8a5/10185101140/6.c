#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int x,y,z;
    if(a>=b){
        x=a; y=b;
    }
    else{
        x=b; y=a;
    }
    while(y!=0){
        z=x%y;
        x=y;
        y=z;
    }
    printf("最大公约数是: %d",x);
    return 0;
}
