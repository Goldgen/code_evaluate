#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    c=a%4;
    d=a%100;
    e=a%400;
	{ if((c==0&&d!=0)||(e==0))
        printf("闰年 ");
    else
        printf("不是闰年 ");}
	{if(b>=3&&b<=5)
		printf("春季 ");
	 else if (b>=6&&b<=8)
		 printf("夏季 ");
	 else if (b>=9&&b<=11)
		 printf("秋季 ");
	 else
		  printf("冬季 ");}
{if((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12))
       printf("31");
else if ((b==4)||(b==6)||(b==9)||(b==11))
         printf("30");
else {if((c==0&&d!=0)||(e==0))
            printf("29");
         else
            printf("28");}}
return 0;
}
