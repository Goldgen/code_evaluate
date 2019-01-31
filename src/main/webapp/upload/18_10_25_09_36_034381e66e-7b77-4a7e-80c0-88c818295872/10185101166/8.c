#include<stdio.h>
int g(int n)
    {
        if(n==1)return 0;
        else if(n==2) return 31;
        else if(n==3) return 59;
        else if(n==4) return 90;
        else if(n==5) return 120;
        else if(n==6) return 151;
        else if(n==7) return 181;
        else if(n==8) return 212;
        else if(n==9) return 243;
        else if(n==10) return 273;
        else if(n==11) return 304;
        else if(n==12) return 334;
    }
int main()
{
    int a,b,c,d,e,f,a1,a2;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    int m1=0 , m2=0;
    for(int i=1;i<=a-1;i++)
    {
    	if((i%4==0&&i%100!=0)||i%400==0) 
        m1++;
	}
    for(int i=1;i<=d-1;i++)
    {
    	if((i%4==0&&i%100!=0)||i%400==0)  
		m2++;
	}
    a1=365*(a-1)+g(b)+c+m1;
    a2=365*(d-1)+g(e)+f+m2;
    if((a%4 ==0&&a%100!=0||a%400==0)&&b>=3) 
	a1++;
    if((d%4 ==0&&d%100!=0||d%400==0)&&e>=3) 
	a2++;
    printf("采集时间为%d天",a2-a1);
}
