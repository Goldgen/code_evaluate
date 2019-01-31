#include<stdio.h>
int h(int x)
{
    switch(x)
    {
        case 1:return 0;
        break;
        case 2:return 31;
        break;
        case 3:return 59;
        break;
        case 4:return 90;
        break;
        case 5:return 120;
        break;
        case 6:return 151;
        break;
        case 7:return 181;
        break;
        case 8:return 212;
        break;
        case 9:return 243;
        break;
        case 10:return 273;
        break;
        case 11:return 304;
        break;
        case 12:return 334;
		break;
		default:
		break;
    }
}
int main()
{
    int a,b,c,d,e,f,t1,t2,i;
    int runnian1=0,runnian2=0;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    for(i=1;i<=a-1;i++)
        if((i%4==0&&i%100!=0)||(i%400==0))
        runnian1++;
    for(i=1;i<=d-1;i++)
        if((i%4==0&&i%100!=0)||(i%400==0))
        runnian2++;
    t1=c+h(b)+365*(a-1)+runnian1;
    t2=f+h(e)+365*(d-1)+runnian2;
    if((a%4 == 0 && a%100 != 0||a%400==0 )&& b>=3)
        t1++;
    if((d%4 == 0 && d%100 != 0||d%400==0 )&& e>=3)
        t2++;
        printf("采集时间为%d天",t2-t1);
    return 0;
}