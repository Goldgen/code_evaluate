#include<stdio.h>
int main(void)
{
    int a,b,c,d,g,f,e;
    for(a=1;a<=9;a++){
        for(b=0;b<=9;b++){
            for(c=0;c<=9;c++){
                d=a*a*a+b*b*b+c*c*c;
                e=d%10;
                f=(d/10)%10;
                g=d/100;
                if(g==a&&f==b&&e==c&&d>=100){
                    if(d<400)
                    printf("%d ",d);
                    else
                    printf("%d",d);
                }
            }
        }
    }
    return 0;
}
