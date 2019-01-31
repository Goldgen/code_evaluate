#include <stdio.h>
#include <math.h>
int main()
{
    int year1,month1,day1,year2,month2,day2,A=0,B=0,j=1,i=1;
    scanf("%d %d %d %d %d %d",&year1,&month1,&day1,&year2,&month2,&day2);
    for (int y1=1;y1<=year1-1;y1++)
    {
        if(0==y1%4&&0!=y1%100||0==y1%400)
            A +=366;
        else
            A +=365;
    }
    for (int y2=1;y2<=year2-1;y2++)
    {
        if(((0==y2%4)&&(0!=y2%100))||(0==y2%400))
            B +=366;
        else
            B +=365;
    }
    for (;j<month1;j++)
    {
        switch(j)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                A+=31;
                break;
            case 4: case 6: case 9: case 11:
                A+=30;
                break;
            default:
                if(((0==year1%4)&&(0!=year1%100))||(0==year1%400))
                    A+=29;
                else
                    A+=28;
            break;
        }
    }
     for (;i<month2;i++)
    {
        switch (i)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                B+=31;
                break;
            case 4: case 6: case 9: case 11:
                B+=30;
                break;
            default:
                if(((0==year2%4)&&(0!=year2%100))||(0==year2%400))
                    B+=29;
                else
                    B+=28;
            break;
        }
    }
    A +=day1;
    B +=day2;
    printf("采集时间为%d天",abs(A-B));
    return 0;
}
