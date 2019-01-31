#include <stdio.h>

int main(void) {
    int y1,y2,m1,m2,d1,d2;
    scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
    int ya,length,date1,date2;
    int q = 0,m = 0;
    for(ya=y1;ya<=y2;ya++){
        if(((ya%4==0) && (ya%100!=0))||(ya%400==0)){
            q++;
            if((ya==y1)&&(y1!=y2)){
                m=1;
            }
            else if((ya==y2)&&(y1!=y2)){
                m=2;
            }
            else if((ya==y1)&&(y1==y2)){
                m=3;
            }
        }
    }
    //把月日先转化成当年的第几天
    for(date1=0,m1-=1;m1>0;m1--){
        if((m1==1)||(m1==3)||(m1==5)||(m1==7)||(m1==8)||(m1==10)||(m1==12)){
            date1+=31;
        }
        else if((m1==2)&&((m==1)||(m==3))){
            date1+=29;
        }
        else if(m1==2){
            date1+=28;
        }
        else if((m1==4)||(m1==6)||(m1==9)||(m1==11)){
            date1+=30;
        }
        else
            date1+=0;
    }
    date1+=d1;

    for(date2=0,m2-=1;m2>0;m2--){
        if((m2==1)||(m2==3)||(m2==5)||(m2==7)||(m2==8)||(m2==10)||(m2==12)){
            date2+=31;
        }
        else if((m2==2)&&((m==2)||(m==3))){
            date2+=29;
        }
        else if(m2==2){
            date2+=28;
        }
        else if((m2==4)||(m2==6)||(m2==9)||(m2==11)){
            date2+=30;
        }
        else
            date2+=0;
    }
    date2+=d2;
    //对年份进行分类
    if(y1==y2){
        length=date2-date1;
    }//同年
    else {
        if(m==1){
            length=366-date1+date2+365*(y2-y1-q)+366*(q-1);
        }
        else if(m==2){
            length=365-date1+date2+365*(y2-y1-q)+366*(q-1);
        }
        else{
            length=365-date1+date2+365*(y2-y1-1-q)+366*q;
        }
    }//不同年
    printf("采集时间为%d天",length);
    return 0;
}
