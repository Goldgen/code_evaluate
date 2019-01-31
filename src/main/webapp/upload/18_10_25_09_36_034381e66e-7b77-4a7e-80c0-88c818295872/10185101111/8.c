int main()
{
    int day1,day2,month1,month2,year1,year2;
    int judge1=0,judge2=0,sum1=0,sum2=0,sum3=0;
    int t;
    scanf("%d %d %d %d %d %d",&year1,&month1,&day1,&year2,&month2,&day2);
    if(year1%400==0||(year1%4==0&&year1%100!=0)){
        judge1=1;
    }if(year2%400==0||(year2%4==0&&year2%100!=0)){
        judge2=1;
    }for(int m=1;m<month1;m++){
        switch(m){
            case 2:if(judge1==1)sum1+=29;
            else sum1+=28;break;
            case 4:sum1+=30;break;
            case 6:sum1+=30;break;
            case 9:sum1+=30;break;
            case 11:sum1+=30;break;
            default:sum1+=31;break;
        }
    }    for(int n=1;n<month2;n++){
        switch(n){
            case 2:if(judge2==1)sum2+=29;
            else sum2+=28;break;
            case 4:sum2+=30;break;
            case 6:sum2+=30;break;
            case 9:sum2+=30;break;
            case 11:sum2+=30;break;
            default:sum2+=31;break;
        }
    }if(year1>year2){
            t=year1;
            year1=year2;
            year2=t;
        }
        for(int i=year1;i<year2;i++){
            if(i%400==0||(i%4==0&&i%100!=0))sum3+=366;
            else sum3+=365;
        }if(year1==year2)printf("采集时间为%d天",abs(sum1+day1-day2-sum2));
        else printf("采集时间为%d天",sum3+sum2+day2-sum1-day1);

}