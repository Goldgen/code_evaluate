 #include<stdio.h>
int myYear(int year){
    return (year%4==0)&&( year %400==0 || year %100!= 0) ? 1:0;
}

int dayOfMonth(int year , int month) {
    int dayA[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    return (month == 2 && myYear(year)==1) ? dayA[month]+1 : dayA[month] ;
}

int sumDay(int year1,int month1,int day1,int year2,int month2,int day2){
    long total = 0;

    for(int year = year1; year < year2 ;  year ++ ){
        total = total + 365;
        if(myYear(year)==1)
            total ++;
    }

    for(int month =1; month < month2; month ++ ){
        total = total + dayOfMonth(year2,month);
    }
    total = total + day2;
	
    for(int month=1 ; month < month1; month ++ ){
         total = total - dayOfMonth(year1,month);
    }
    return total - day1;
}

int main(){

    int year1 ,month1,day1;
    int year2, month2,day2;

    scanf("%d %d %d %d %d %d", &year1,&month1,&day1,&year2,&month2,&day2);
    printf("采集时间为%ld天",sumDay(year1,month1,day1,year2,month2,day2));
    return 0;
}
