
#include <stdio.h>

int main()
{
    unsigned int year,month=0;
    scanf("%d %d",&year,&month);
    
    if((year%4==0&&year%100!=0)||(year%400==0))
        
        switch(month)
    {
        case 3:case 5:
            printf("闰年 春季 31");
            break;
        case 4:
            printf("闰年 春季 30");
            break;
        case 7:case 8:
            printf("闰年 夏季 31");
            break;
        case 6:
            printf("闰年 夏季 30");
            break;
        case 9:case 11:
            printf("闰年 秋季 30");
            break;
        case 10:
            printf("闰年 秋季 31");
            break;
        case 12:case 1:
            printf("闰年 冬季 31");
            break;
        case 2:
            printf("闰年 冬季 29");
            break;
            
            default:
            break;
      
    }
    else
    
        switch(month)
    {
        case 3:case 5:
            printf("不是闰年 春季 31");
            break;
        case 4:
            printf("不是闰年 春季 30");
            break;
        case 7:case 8:
            printf("不是闰年 夏季 31");
            break;
        case 6:
            printf("不是闰年 夏季 30");
            break;
        case 9:case 11:
            printf("不是闰年 秋季 30");
            break;
        case 10:
            printf("不是闰年 秋季 31");
            break;
        case 12:case 1:
            printf("不是闰年 冬季 31");
            break;
        case 2:
            printf("不是闰年 冬季 28");
            break;
            
            default:
            break;
    }
    

    
    return 0;
    
    
}

