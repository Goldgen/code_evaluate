#include <stdio.h>
int main()
{
    int a,b,i,sum,co,d=0;
    for(a=1;a<10;a++)
    for(b=0;b<10;b++)
    for(i=0;i<10;i++)
    {
       sum=a*a*a+b*b*b+i*i*i;
       if(sum>=100&&sum<=999){co=sum%10;
            if(co==i){co=(sum%100-co)/10;
            if(co==b){co=sum/100;
            if(co==a){printf("%d",sum);d+=1;if(d<=3)printf(" ");
    }}}}}
    return 0;
}
