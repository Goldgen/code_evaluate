#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,m,n,x;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if (b<=2)
        m=c+(b-1)*31;
    else if(((a%4==0)&&(a%100!=0))||(a%400==0))
    {
        if(b==3) m=c+60;
        if(b==4) m=c+91;
        if(b==5) m=c+121;
        if(b==6) m=c+152;
        if(b==7) m=c+182;
        if(b==8) m=c+213;
        if(b==9) m=c+244;
        if(b==10) m=c+274;
        if(b==11) m=c+305;
        if(b==12) m=c+335;
    }
    else
    {
        if(b==3) m=c+59;
        if(b==4) m=c+90;
        if(b==5) m=c+120;
        if(b==6) m=c+151;
        if(b==7) m=c+181;
        if(b==8) m=c+212;
        if(b==9) m=c+243;
        if(b==10) m=c+273;
        if(b==11) m=c+304;
        if(b==12) m=c+334;
    }
    if (e<=2)
        n=f+(e-1)*31;
    else if(((d%4==0)&&(d%100!=0))||(d%400==0))
    {
        if(e==3) n=f+60;
        if(e==4) n=f+91;
        if(e==5) n=f+121;
        if(e==6) n=f+152;
        if(e==7) n=f+182;
        if(e==8) n=f+213;
        if(e==9) n=f+244;
        if(e==10) n=f+274;
        if(e==11) n=f+305;
        if(e==12) n=f+335;
    }
    else
    {
        if(e==3) n=f+59;
        if(e==4) n=f+90;
        if(e==5) n=f+120;
        if(e==6) n=f+151;
        if(e==7) n=f+181;
        if(e==8) n=f+212;
        if(e==9) n=f+243;
        if(e==10) n=f+273;
        if(e==11) n=f+304;
        if(e==12) n=f+334;
    }

    if (((a%4==0)&&(a%100!=0))||(a%400==0))
    { 
	
        if (((d%4==0)&&(d%100!=0))||(d%400==0))
        x=((d-a)/4)*366+0.75*(d-a)*365;
        else 
        x=(((d-a)/4)+1)*366+((d-a)-(((d-a)/4)+1))*365;
        
    }
    else if(((d%4==0)&&(d%100!=0))||(d%400==0))
    x=(((d-a)/4)*366)+((d-a)-((d-a)/4))*365;
    else
        x=(((d-a)/4)+1)*366+((d-a)-(((d-a)/4)+1))*365;
    printf("采集时间为%d天",x-m+n);
    return 0;
}