#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y1,m1,d1,y2,m2,d2,a=0,a1=0,a2=0,b=0,b1=0,b2=0,b3=0,c=0,c1=0,c2=0,c3=0,f=0,f1=0,f2=0,f3=0,e1=0,e2=0;
    scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
    if(((y1%4==0)&&(y1%100!=0))||(y1%400==0))
                e1+=1;
            if(((y2%4==0)&&(y2%100!=0))||(y2%400==0))
                e2+=1;
            for(c=m1;c<=12;c++)
            switch(c)
            {
                case 1:case 3:case 5:case 7:case 8:case 10:case 12:
                    c1+=1;
                    break;
                case 4:case 6:case 9:case 11:
                    c2+=1;
                    break;
                default:
                    c3+=1;
                    break;
            }
            for(f=1;f<m2;f++)
            switch(f)
            {
                case 1:case 3:case 5:case 7:case 8:case 10:case 12:
                    f1+=1;
                    break;
                case 4:case 6:case 9:case 11:
                    f2+=1;
                    break;
                default:
                    f3+=1;
                    break;
            }
    if(y1==y2-1)
        {
        printf("采集时间为%d天",31*(c1+f1)+30*(c2+f2)+28*(c3+f3)+e1*c3+e2*f3+d2-d1);
        }
    else
    {
        if(y2>y1+1)
        {
            for(a=y1+1;a<=y2-1;a++)
            {
                if(((a%4==0)&&(a%100!=0))||(a%400==0))
                    a1+=1;
                else
                    a2+=1;
            }
            printf("采集时间为%d天",366*a1+365*a2+31*(c1+f1)+30*(c2+f2)+28*(c3+f3)+e1*c3+e2*f3+d2-d1);
        }
        else
        {
            for(b=m1;b<m2;b++)
            switch(b)
            {
                case 1:case 3:case 5:case 7:case 8:case 10:case 12:
                    b1+=1;
                    break;
                case 4:case 6:case 9:case 11:
                    b2+=1;
                    break;
                default:
                    b3+=1;
                    break;
            }
            if(((y1%4==0)&&(y1%100!=0))||(y1%400==0))
                printf("采集时间为%d天",31*b1+30*b2+29*b3+d2-d1);
            else
                printf("采集时间为%d天",31*b1+30*b2+28*b3+d2-d1);
        }
    }
    return 0;
}
