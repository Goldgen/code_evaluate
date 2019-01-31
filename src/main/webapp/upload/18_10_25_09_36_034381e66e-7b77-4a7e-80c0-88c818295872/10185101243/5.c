#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if ((a%4==0)&&(a%100!=0))

        printf("闰年 ");
        
       else if (a%400==0)
            printf("闰年 ");
        else
            printf("不是闰年 ");
    
    if ((b==3)||(b==4)||(b==5))
      printf("春季 ");
      
      else if ((b==6)||(b==7)||(b==8))
        printf("夏季 ");
      else if ((b==9)||(b==10)||(b==11))
        printf("秋季 ");
      else
        printf("冬季 ");
    if ((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12))
    printf("31");
	else if ((a%4==0)&&(a%100!=0)&&(b==2))
	printf("29");
	else if ((a%400==0)&&(b==2))
	printf("29");
	else if (b==2)
	printf("28");
	else
	printf("30");
    

    return 0;
}