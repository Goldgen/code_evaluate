#include <stdio.h>

int main(void)
{
    int year,month;
    scanf("%d %d",&year,&month);
    if ((year%4==0&&year%100!=0)||(year%400==0)){
        printf("闰年 ");
    }
    else{
        printf("不是闰年 ");
    }//判断是否是闰年

    switch(month)//判断季节春夏秋冬
    {
    case 12: case 1: case 2:
        printf("冬季 ");
        break;
    case 3: case 4: case 5:
        printf("春季 ");
        break;
    case 6: case 7: case 8:
        printf("夏季 ");
        break;
    case 9: case 10: case 11:
        printf("秋季 ");
        break;
	default:
		break;
    }
    if (month==2){
        if ((year%4==0&&year%100!=0)||(year%400==0)){
            printf("29");//闰年二月为29天，非闰年为28天
        }
        else{
            printf("28");
        }
    }
    else if (month==4||month==6||month==9||month==11){
        printf("30");
    }
    else{
        printf("31");
    }
    return 0;
}
