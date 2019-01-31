#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a>b?b:a;
    int d=a>b?a:b;
    for(int i=1;i<=c;i++){
        if(d%i==0 && c%i==0)a=i;
    }
    printf("最大公约数是: %d",a);
    return 0;
}
