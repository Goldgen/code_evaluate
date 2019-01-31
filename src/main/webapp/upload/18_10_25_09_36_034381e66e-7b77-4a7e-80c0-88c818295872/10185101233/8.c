#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,d,e,f;int x,y,u,v,g,h;
    double sum_1,sum_2;
    int i=1;int r=1;
    int j=1;int s=1;
    double q;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
        while(r<a)
        {
            if(((r%4==0)&&(r%100!=0))||(r%400==0))
                g=1;
            else
                g=2;
            switch(g)
            {
                case 1:
                u=366;
                break;
                case 2:
                u=365;
                break;
            }
            sum_1=sum_1+u;
            r++;
        }

        while(i<b)
        {
            switch(i)
            {
                case 1:case 3:case 5:case 7:case 8:case 10:
                x=31;
                break;
                case 2:
                {
                    if((a%4==0&&a%100!=0)||(a%400==0))
                    x=29;
                    else
                    x=28;
                }
                break;
                case 4:case 6:case 9:case 11:
                x=30;
                break;
                default:
                break;
            }
            sum_1=sum_1+x;
            i++;
        }
        sum_1+=c;

        while(s<d)
        {
            if(((s%4==0)&&(s%100!=0))||(s%400==0))
                h=1;
            else
                h=2;
            switch(h)
            {
                case 1:
                v=366;
                break;
                case 2:
                v=365;
                break;
            }
            sum_2=sum_2+v;
            s++;
        }
        while(j<e)
        {
            switch(j)
            {
                case 1:case 3:case 5:case 7:case 8:case 10:
                y=31;
                break;
                case 2:
                {
                    if((d%4==0&&d%100!=0)||(d%400==0))
                    y=29;
                    else
                    y=28;
                }
                break;
                case 4:case 6:case 9:case 11:
                y=30;
                break;
                default:
                break;
            }
            sum_2=sum_2+y;
            j++;
        }
        sum_2+=f;
        q=fabs(sum_1-sum_2);
        printf("采集时间为%lf天",q);
    return 0;
}
