#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
        int m,c=1;
        if(a<b){
            m=a;
            a=b;
            b=m;
        }
        while(c!=0)
        {
            c =a % b;
            a=b;
            b=c;
        }
        printf("最大公约数是: %d",a);
    return 0;
}